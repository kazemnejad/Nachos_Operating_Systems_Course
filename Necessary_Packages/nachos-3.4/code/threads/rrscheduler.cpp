/*
 * rrscheduler.cpp
 *
 *  Created on: Dec 9, 2017
 *      Author: amirhosein
 */

#include "rrscheduler.h"

RoundRobinScheduler::RoundRobinScheduler() {
	printf("rr\n");
}

RoundRobinScheduler::~RoundRobinScheduler() {
	// TODO Auto-generated destructor stub
}

Thread* RoundRobinScheduler::FindNextToRun() {
	return NULL;
}

void RoundRobinScheduler::ReadyToRun(Thread* t) {

}
