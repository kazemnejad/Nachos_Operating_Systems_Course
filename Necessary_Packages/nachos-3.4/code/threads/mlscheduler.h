/*
 * mlscheduler.h
 *
 *  Created on: Dec 9, 2017
 *      Author: amirhosein
 */

#ifndef THREADS_MLSCHEDULER_H_
#define THREADS_MLSCHEDULER_H_

#include "scheduler.h"

class MultiLevelScheduler : public Scheduler {
public:
	MultiLevelScheduler();
	virtual ~MultiLevelScheduler();

	void ReadyToRun(Thread* thread);
	Thread* FindNextToRun();
};

#endif /* THREADS_MLSCHEDULER_H_ */
