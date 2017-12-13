/*
 * mlscheduler.cpp
 *
 *  Created on: Dec 9, 2017
 *      Author: amirhosein
 */

#include "mlscheduler.h"
#include "pqscheduler.h"
#include "sjfscheduler.h"
#include <iostream>
using namespace std;

MultiLevelScheduler::MultiLevelScheduler() {
	q1 = new PriorityQueueScheduler();
	q2 = new SjfScheduler();
}

MultiLevelScheduler::~MultiLevelScheduler() {
	delete q1;
	delete q2;
}

Thread* MultiLevelScheduler::FindNextToRun() {
	if (!q1->empty()){
		DEBUG('t', "Now in thread \"%s\"\n from PQ in MLQ", currentThread->getName());
		return q1->FindNextToRun();
	}
	else if (!q2->empty()) {
		DEBUG('t', "Now in thread \"%s\"\n from SJF in MLQ", currentThread->getName());
		return q2->FindNextToRun();
	}
	return nullptr;
}

void MultiLevelScheduler::ReadyToRun(Thread* t) {
	if (t->getSchedulingType() == SYSTEM_TYPE)
		q1->ReadyToRun(t);
	else if (t->getSchedulingType() ==  USER_TYPE)
		q2->ReadyToRun(t);
}
