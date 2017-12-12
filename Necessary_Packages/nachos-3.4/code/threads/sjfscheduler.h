/*
 * sjfscheduler.h
 *
 *  Created on: Dec 9, 2017
 *      Author: amirhosein
 */

#ifndef THREADS_SJFSCHEDULER_H_
#define THREADS_SJFSCHEDULER_H_

#include "scheduler.h"
#include <unordered_map>
#include <chrono>
using namespace std;
using namespace std::chrono;

class SjfScheduler: public Scheduler {
public:
	SjfScheduler();
	virtual ~SjfScheduler();

	void ReadyToRun(Thread* thread);
	Thread* FindNextToRun();

	bool empty() {return burst_times.empty();}

private:
    unordered_map<Thread*, long long int > burst_times;
    time_point<std::chrono::_V2::system_clock, std::chrono::duration<long long int, std::ratio<1ll, 1000000000ll> > > now_time = std::chrono::high_resolution_clock::now();
    long long int nanos = duration_cast<nanoseconds>(now_time.time_since_epoch()).count();
    long long int last_time = nanos;
};

#endif /* THREADS_SJFSCHEDULER_H_ */


