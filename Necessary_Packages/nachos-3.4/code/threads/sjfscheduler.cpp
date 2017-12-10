/*
 * sjfscheduler.cpp
 *
 *  Created on: Dec 9, 2017
 *      Author: amirhosein
 */

#include "sjfscheduler.h"

SjfScheduler::SjfScheduler() {
	printf("sjf\n");
}

SjfScheduler::~SjfScheduler() {
	// TODO Auto-generated destructor stub
}

void SjfScheduler::ReadyToRun(Thread* t) {

}

Thread* SjfScheduler::FindNextToRun(){
	return NULL;
}
