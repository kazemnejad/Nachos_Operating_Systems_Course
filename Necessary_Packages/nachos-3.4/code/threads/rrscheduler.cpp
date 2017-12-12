/*
 * rrscheduler.cpp
 *
 *  Created on: Dec 9, 2017
 *      Author: amirhosein
 */

#include "rrscheduler.h"

RoundRobinScheduler::RoundRobinScheduler() {
    readyList = new List;
}

RoundRobinScheduler::~RoundRobinScheduler() {
    delete readyList;
}

Thread* RoundRobinScheduler::FindNextToRun() {
	return (Thread *)readyList->Remove();
}

void RoundRobinScheduler::ReadyToRun(Thread* thread) {
	thread->setStatus(READY);
	readyList->Append((void *)thread);
}
