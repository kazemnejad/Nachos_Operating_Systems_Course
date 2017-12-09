/*
 * rrscheduler.h
 *
 *  Created on: Dec 9, 2017
 *      Author: amirhosein
 */

#ifndef THREADS_RRSCHEDULER_H_
#define THREADS_RRSCHEDULER_H_

#include "scheduler.h"

class RoundRobinScheduler: public Scheduler {
public:
	RoundRobinScheduler();
	virtual ~RoundRobinScheduler();

	void ReadyToRun(Thread* thread);
	Thread* FindNextToRun();
};

#endif /* THREADS_RRSCHEDULER_H_ */
