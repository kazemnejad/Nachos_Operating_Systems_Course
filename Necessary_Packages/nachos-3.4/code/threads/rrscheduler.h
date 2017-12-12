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

private:
    List *readyList;  		// queue of threads that are ready to run,

};

#endif /* THREADS_RRSCHEDULER_H_ */
