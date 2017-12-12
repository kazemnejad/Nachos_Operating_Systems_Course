/*
 * PriorityQueueScheduler.h
 *
 *  Created on: Dec 9, 2017
 *      Author: amirhosein
 */

#ifndef THREADS_PQSCHEDULER_H_
#define THREADS_PQSCHEDULER_H_

#include "scheduler.h"
#include "priorityQueue.h"


class PriorityQueueScheduler : public Scheduler {
	PriorityQueue* pq;

public:

	PriorityQueueScheduler();
	virtual ~PriorityQueueScheduler();

    void ReadyToRun(Thread* t);
    Thread* FindNextToRun();

    bool empty() {return pq->empty();}
};

#endif /* THREADS_PQSCHEDULER_H_ */
