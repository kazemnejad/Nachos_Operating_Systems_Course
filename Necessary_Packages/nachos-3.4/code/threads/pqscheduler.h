/*
 * PriorityQueueScheduler.h
 *
 *  Created on: Dec 9, 2017
 *      Author: amirhosein
 */

#ifndef THREADS_PQSCHEDULER_H_
#define THREADS_PQSCHEDULER_H_

#include "scheduler.h"

class PriorityQueueScheduler : public Scheduler {
public:
	PriorityQueueScheduler();
	virtual ~PriorityQueueScheduler();

    void ReadyToRun(Thread* thread);
    Thread* FindNextToRun();
};

#endif /* THREADS_PQSCHEDULER_H_ */
