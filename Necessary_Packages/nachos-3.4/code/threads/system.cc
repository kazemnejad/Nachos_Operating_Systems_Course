// system.cc 
//	Nachos initialization and cleanup routines.
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "system.h"

#include <string>
using namespace std;

#include "pqscheduler.h"
#include "mlscheduler.h"
#include "rrscheduler.h"
#include "sjfscheduler.h"

// This defines *all* of the global data structures used by Nachos.
// These are all initialized and de-allocated by this file.

Thread *currentThread;			// the thread we are running now
Thread *threadToBeDestroyed;  		// the thread that just finished
Scheduler *scheduler;			// the ready list
Interrupt *interrupt;			// interrupt status
Statistics *stats;			// performance metrics
Timer *timer;				// the hardware timer device,
					// for invoking context switches

#ifdef FILESYS_NEEDED
FileSystem  *fileSystem;
#endif

#ifdef FILESYS
SynchDisk   *synchDisk;
#endif

#ifdef USER_PROGRAM	// requires either FILESYS or FILESYS_STUB
Machine *machine;	// user program memory and registers
#endif

#ifdef NETWORK
PostOffice *postOffice;
#endif


// External definition, to allow us to take a pointer to this function
extern void Cleanup();



//----------------------------------------------------------------------
// TimerInterruptHandler
// 	Interrupt handler for the timer device.  The timer device is
//	set up to interrupt the CPU periodically (once every TimerTicks).
//	This routine is called each time there is a timer interrupt,
//	with interrupts disabled.
//
//	Note that instead of calling Yield() directly (which would
//	suspend the interrupt handler, not the interrupted thread
//	which is what we wanted to context switch), we set a flag
//	so that once the interrupt handler is done, it will appear as 
//	if the interrupted thread called Yield at the point it is 
//	was interrupted.
//
//	"dummy" is because every interrupt handler takes one argument,
//		whether it needs it or not.
//----------------------------------------------------------------------
static void
TimerInterruptHandler(int dummy)
{
    if (interrupt->getStatus() != IdleMode)
	interrupt->YieldOnReturn();
}

// External functions used by this file



//----------------------------------------------------------------------
// Initialize
// 	Initialize Nachos global data structures.  Interpret command
//	line arguments in order to determine flags for the initialization.  
// 
//	"argc" is the number of command line arguments (including the name
//		of the command) -- ex: "nachos -d +" -> argc = 3 
//	"argv" is an array of strings, one for each command line argument
//		ex: "nachos -d +" -> argv = {"nachos", "-d", "+"}
//----------------------------------------------------------------------
void
Initialize(int argc, char **argv, const char* schedulerName)
{
    int argCount;
    char* debugArgs = "";
    bool randomYield = FALSE;

#ifdef USER_PROGRAM
    bool debugUserProg = FALSE;	// single step user program
#endif
#ifdef FILESYS_NEEDED
    bool format = FALSE;	// format disk
#endif
#ifdef NETWORK
    double rely = 1;		// network reliability
    int netname = 0;		// UNIX socket name
#endif
    
    for (argc--, argv++; argc > 0; argc -= argCount, argv += argCount) {
	argCount = 1;
	std::string arg = "";
	if (arg ==  "-d") {
	    if (argc == 1)
		debugArgs = "+";	// turn on all debug flags
	    else {
	    	debugArgs = *(argv + 1);
	    	argCount = 2;
	    }
	} else if (arg ==  "-rs") {
	    ASSERT(argc > 1);
	    RandomInit(std::stoi(*(argv + 1)));	// initialize pseudo-random
						// number generator
	    randomYield = TRUE;
	    argCount = 2;
	}
#ifdef USER_PROGRAM
	if (arg ==  "-s")
	    debugUserProg = TRUE;
#endif
#ifdef FILESYS_NEEDED
	if (arg ==  "-f")
	    format = TRUE;
#endif
#ifdef NETWORK
	if (arg ==  "-l") {
	    ASSERT(argc > 1);
	    rely = std::stof(*(argv + 1));
	    argCount = 2;
	} else if (arg ==  "-m") {
	    ASSERT(argc > 1);
	    netname = std::stoi(*(argv + 1));
	    argCount = 2;
	}
#endif
    }

    DebugInit(debugArgs);			// initialize DEBUG messages
    stats = new Statistics();			// collect statistics
    interrupt = new Interrupt;			// start up interrupt handling

    std::string name = schedulerName;
    if (name == "pq")
    	scheduler = new PriorityQueueScheduler();		// initialize the ready queue
    else if (name == "sjf")
    	scheduler = new SjfScheduler();
    else if (name == "ml")
    	scheduler = new MultiLevelScheduler();
    else if (name == "rr"){
    	scheduler = new RoundRobinScheduler();
    }else
    	scheduler = new PriorityQueueScheduler();


    if (randomYield)				// start the timer (if needed)
    	timer = new Timer(TimerInterruptHandler, 0, randomYield);

    threadToBeDestroyed = nullptr;

    // We didn't explicitly allocate the current thread we are running in.
    // But if it ever tries to give up the CPU, we better have a Thread
    // object to save its state. 
    currentThread = new Thread("main");		
    currentThread->setStatus(RUNNING);

    interrupt->Enable();
    CallOnUserAbort(Cleanup);		// if user hits ctl-C
    
#ifdef USER_PROGRAM
    machine = new Machine(debugUserProg);	// this must come first
#endif

#ifdef FILESYS
    synchDisk = new SynchDisk("DISK");
#endif

#ifdef FILESYS_NEEDED
    fileSystem = new FileSystem(format);
#endif

#ifdef NETWORK
    postOffice = new PostOffice(netname, rely, 10);
#endif
}

//----------------------------------------------------------------------
// Cleanup
// 	Nachos is halting.  De-allocate global data structures.
//----------------------------------------------------------------------
void
Cleanup()
{
    printf("\nCleaning up...\n");
#ifdef NETWORK
    delete postOffice;
#endif
    
#ifdef USER_PROGRAM
    delete machine;
#endif

#ifdef FILESYS_NEEDED
    delete fileSystem;
#endif

#ifdef FILESYS
    delete synchDisk;
#endif

    delete timer;
    delete scheduler;
    delete interrupt;


    Exit(0);
}

