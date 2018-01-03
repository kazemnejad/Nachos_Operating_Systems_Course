// exception.cc
//	Entry point into the Nachos kernel from user programs.
//	There are two kinds of things that can cause control to
//	transfer back to here from user code:
//
//	syscall -- The user code explicitly requests to call a procedure
//	in the Nachos kernel.  Right now, the only function we support is
//	"Halt".
//
//	exceptions -- The user code does something that the CPU can't handle.
//	For instance, accessing memory that doesn't exist, arithmetic errors,
//	etc.
//
//	Interrupts (which can also cause control to transfer from user
//	code into the Nachos kernel) are handled elsewhere.
//
// For now, this only handles the Halt() system call.
// Everything else core dumps.
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "system.h"
#include "syscall.h"

void HandleForkSyscall();
void HandleKhiariForkSyscall();
void DoAfterContextSwitchThings();
void HandleJoinSyscall();
void HandleExecSyscall();
char *readString(int addr, int len);

//----------------------------------------------------------------------
// ExceptionHandler
// 	Entry point into the Nachos kernel.  Called when a user program
//	is executing, and either does a syscall, or generates an addressing
//	or arithmetic exception.
//
// 	For system calls, the following is the calling convention:
//
// 	system call code -- r2
//		arg1 -- r4
//		arg2 -- r5
//		arg3 -- r6
//		arg4 -- r7
//
//	The result of the system call, if any, must be put back into r2.
//
// And don't forget to increment the pc before returning. (Or else you'll
// loop making the same system call forever!
//
//	"which" is the kind of exception.  The list of possible exceptions
//	are in machine.h.
//----------------------------------------------------------------------

void ExceptionHandler(ExceptionType which)
{
    int type = machine->ReadRegister(2);

    if (which == SyscallException)
    {
        switch (type)
        {
        case SC_Halt:
            DEBUG('a', "Shutdown, initiated by user program.\n");
            interrupt->Halt();
            break;

        case SC_Exit:
            printf("\n# EXIT #: %s\n", currentThread->getName());
            printf("# Exit(arg = %d) #\n", machine->ReadRegister(4));
            currentThread->Finish();
            break;

        case SC_Fork:
            printf("\n# FORK #: %s\n", currentThread->getName());
            HandleForkSyscall();
            break;

        case SC_Join:
            printf("\n# JOIN #: %s\n", currentThread->getName());
            printf("# JOIN(pid = %d) #\n", machine->ReadRegister(4));
            HandleJoinSyscall();
            break;

        case SC_Exec:
            printf("\n# EXEC #: %s\n", currentThread->getName());
            HandleExecSyscall();
            break;

        default:
            printf("Unexpected user mode exception %d %d\n", which, type);
            ASSERT(FALSE);
            break;
        }
    }
}

void RunChildThread(int ignored)
{
    DoAfterContextSwitchThings();

    // return fork result with 0
    machine->WriteRegister(2, 0);

    // increment PC to move from fork syscall
    machine->IncrementPCReg();

    machine->Run();
    ASSERT(FALSE);
}

void HandleForkSyscall()
{
    // force current thread to save its registers
    currentThread->SaveUserState();

    // create new addrSpace using currentThread space (simply copy currentThread memory)
    AddrSpace *space = new AddrSpace(currentThread->space);

    // now create child thread using currentThread (parent thread)
    Thread *childThread = new Thread(currentThread);
    childThread->space = space;

    int childPid = childThread->GetPid();

    // return fork result with child pid
    machine->WriteRegister(2, childPid);

    // increment PC to move from fork syscall
    machine->IncrementPCReg();

    // add child to scheduler readylist (we'll run it in future)
    childThread->Fork(RunChildThread, 0);
}

bool IsTargetRunning(int targetId)
{
    List *threads = scheduler->readyList;
    for (ListElement *ptr = threads->first; ptr != NULL; ptr = ptr->next)
    {
        Thread *t = (Thread *)ptr->item;
        if (t->GetPid() == targetId)
            return true;
    }

    return false;
}

void HandleJoinSyscall()
{
    int targetId = machine->ReadRegister(4);
    while (IsTargetRunning(targetId))
        currentThread->Yield();

    machine->IncrementPCReg();
}

char *readString(int addr, int len)
{
    char *dst = new char[len + 1];
    for (int i = 0; i < len; ++i)
    {
        int value;
        machine->ReadMem(addr + i, 1, &value);
        dst[i] = (char)value;
    }

    dst[len] = 0;

    return dst;
}

void HandleExecSyscall()
{
    // get filename from Exec(name, size)
    int filenameAddr = machine->ReadRegister(4);
    int len = machine->ReadRegister(5);
    char *filename = readString(filenameAddr, len);
    printf("# Exec(filename = %s)\n", filename);

    // try to read program executable file
    OpenFile *executable = fileSystem->Open(filename);

    // check if we find the file or not;
    if (executable == NULL)
    {
        printf("# Unable to open file %s\n", filename);

        // return 0 as pid to Exec syscall
        machine->WriteRegister(2, 0);

        // incremenet pc register
        machine->IncrementPCReg();

        return;
    }

    // create addrSpace using the executable file (simply load file into memory and create pagetable)
    AddrSpace *space = new AddrSpace(executable);

    // create raw thread
    Thread *t = new Thread(filename);
    t->space = space;
    t->space->InitRegisters(t->userRegisters);
    t->SetParentPid(currentThread->GetPid());

    printf("# Created new process with pid = %d #\n", t->GetPid());

    // close file
    delete executable;

    // return created process id to Exec syscall
    machine->WriteRegister(2, t->GetPid());

    // incremenet pc register
    machine->IncrementPCReg();

    // add new program to scheduler readylist
    t->Fork(RunUserProgramProcess, 0);
}