/*
 * PriorityQueueScheduler.cpp
 *
 *  Created on: Dec 9, 2017
 *      Author: amirhosein
 */

#include "pqscheduler.h"
#include "priorityQueue.h"

PriorityQueueScheduler::PriorityQueueScheduler() {
	// TODO Auto-generated constructor stub
	pq = new PriorityQueue;
}

PriorityQueueScheduler::~PriorityQueueScheduler() {
	// TODO Auto-generated destructor stub
	delete pq;
}

Thread* PriorityQueueScheduler::FindNextToRun() {
	node next = pq->dequeue();
	return next.thread;
}

void PriorityQueueScheduler::ReadyToRun(Thread* t) {
	node item;
	item.thread = t;
	item.priority = t->getPriority();
	pq->enqueue(item);
}
