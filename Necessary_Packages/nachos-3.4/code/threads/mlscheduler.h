/*
 * mlscheduler.h
 *
 *  Created on: Dec 9, 2017
 *      Author: amirhosein
 */

#ifndef THREADS_MLSCHEDULER_H_
#define THREADS_MLSCHEDULER_H_

#include "scheduler.h"
#include "pqscheduler.h"
#include "sjfscheduler.h"

#define SYSTEM_TYPE 0
#define USER_TYPE 1

class MultiLevelScheduler : public Scheduler {
public:
	MultiLevelScheduler();
	virtual ~MultiLevelScheduler();

	void ReadyToRun(Thread* thread);
	Thread* FindNextToRun();
private:
	PriorityQueueScheduler* q1;
	SjfScheduler* q2;
};

#endif /* THREADS_MLSCHEDULER_H_ */
