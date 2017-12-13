// threadtest.cc 
//	Simple test case for the threads assignment.
//
//	Create two threads, and have them context switch
//	back and forth between themselves by calling Thread::Yield, 
//	to illustratethe inner workings of the thread system.
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "system.h"
#include <unistd.h>
#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;


// testnum is set in main.cc
int testnum = 1;

//----------------------------------------------------------------------
// SimpleThread
// 	Loop 5 times, yielding the CPU to another ready thread 
//	each iteration.
//
//	"which" is simply a number identifying the thread, for debugging
//	purposes.
//----------------------------------------------------------------------

void
SimpleThread(int which) {
    int num;

    for (num = 0; num < 5; num++) {
        printf("*** thread %d loopedd %d times\n", which, num);
        currentThread->Yield();
    }
}

void
PqSimpleThread(int which) {

    for (int i = 0; i < 5;i++) {
		std::cout <<  "Thread " << which << " looped " << i+1 << std::endl;
        currentThread->Yield();
    }
}

void
SjfSimpleThread(int wich) {
    for (int i = 0; i < 5; ++i) {
        unsigned long microseconds = wich * 10000;
        auto now_time = std::chrono::high_resolution_clock::now();
        auto nanos = duration_cast<nanoseconds>(now_time.time_since_epoch()).count();
        long long int tmp = nanos;
        usleep(microseconds);
        now_time = std::chrono::high_resolution_clock::now();
        nanos = duration_cast<nanoseconds>(now_time.time_since_epoch()).count();
        cout << "sleep time:" << nanos - tmp << "ns" << endl;
        std::cout << "Yielding thread: " << wich << std::endl;
        currentThread->Yield();
    }
}

//----------------------------------------------------------------------
// ThreadTest1
// 	Set up a ping-pong between two threads, by forking a thread 
//	to call SimpleThread, and then calling SimpleThread ourselves.
//----------------------------------------------------------------------

void
ThreadTest1() {
    DEBUG('t', "Entering ThreadTest1");

    Thread *t = new Thread("forked thread");

    t->Fork(SimpleThread, 1);
    SimpleThread(0);
}

void PqThreadTest() {
    for (int i = 0; i < 5; i++) {
        Thread *t = new Thread("ft");
        t->setPriority(i);
        t->Fork(PqSimpleThread, i);
    }

    currentThread->setPriority(100);
    currentThread->Yield();
    PqSimpleThread(3);
}

void SjfThreadTest() {
    for (int i = 1; i < 5; i++) {
        Thread *t = new Thread("kz");
        t->Fork(SjfSimpleThread, i);
    }
    currentThread->Yield();
    PqSimpleThread(5);

}

void MLQThreadTest() {
	for (int i = 0; i < 10;i++) {
			Thread *t = new Thread("ft");
			        t->setPriority(i);
			        t->setSchedulingType(i%2);
			        if (i%2 == 0)
			        	t->Fork(PqSimpleThread, i);
			        else if (i%2 == 1)
			        	t->Fork(SjfSimpleThread, i);
		}
}

//----------------------------------------------------------------------
// ThreadTest
// 	Invoke a test routine.
//----------------------------------------------------------------------

void
ThreadTest(string sn) {
    if (sn == "pq"){
    	PqThreadTest();
    }else if (sn == "sjf"){
    	SjfThreadTest();
    }else if (sn == "ml") {
    	MLQThreadTest();
    }
}
