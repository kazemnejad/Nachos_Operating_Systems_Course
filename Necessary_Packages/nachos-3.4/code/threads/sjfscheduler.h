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



#ifndef SJF_SJF_H
#define SJF_SJF_H

#include <vector>
#include <hash_map>

struct Process {
	int pid;
	int bt;
	std::vector<int> burst_times;
};

class SJF {
public:
	bool comparison(Process a, Process b);

	void findWaitingTime(Process proc[], int n, int wt[]);

	void findTurnAroundTime(Process proc[], int n, int wt[], int tat[]);

	void findavgTime(Process proc[], int n);


private:
};

#endif //SJF_SJF_H
