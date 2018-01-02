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
            printf("kir\n");
            // HandleForkSyscall();x
            // machine->WriteRegister(2, 5);
            // machine->IncrementPCReg();
            // HandleKhiariForkSyscall();
            HandleForkSyscall();
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
    // DoContextSwitchThings();

    // return fork result with 0
    machine->DumpState();
    machine->WriteRegister(2, 0);

    // increment PC to move from fork syscall
    // machine->IncrementPCReg();

    machine->Run();
    ASSERT(FALSE);
}

void HandleForkSyscall()
{
    // force current thread to save its registers
    machine->IncrementPCReg();
    currentThread->SaveUserState();
    machine->DumpState();

    // create new addrSpace using currentThread space (simply copy currentThread memory)
    AddrSpace *space = new AddrSpace(currentThread->space);

    // now create child thread using currentThread (parent thread)
    Thread *childThread = new Thread(currentThread);
    childThread->space = space;

    int childPid = childThread->GetPid();

    // return fork result with child pid
    machine->WriteRegister(2, childPid + 12);
    machine->DumpState(childThread->userRegisters);

    // increment PC to move from fork syscall
    // machine->IncrementPCReg();

    childThread->Fork(RunChildThread, 0);
}

void HandleKhiariForkSyscall()
{
    Thread *childThread = new Thread(currentThread);
    int newPc = machine->ReadRegister(4);
    currentThread->space->InitRegisters();
    machine->OverridePC(newPc);
}