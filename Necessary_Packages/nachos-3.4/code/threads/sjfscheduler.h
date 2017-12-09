/*
 * sjfscheduler.h
 *
 *  Created on: Dec 9, 2017
 *      Author: amirhosein
 */

#ifndef THREADS_SJFSCHEDULER_H_
#define THREADS_SJFSCHEDULER_H_

#include "scheduler.h"

class SjfScheduler: public Scheduler {
public:
	SjfScheduler();
	virtual ~SjfScheduler();

	void ReadyToRun(Thread* thread);
	Thread* FindNextToRun();
};

#endif /* THREADS_SJFSCHEDULER_H_ */
