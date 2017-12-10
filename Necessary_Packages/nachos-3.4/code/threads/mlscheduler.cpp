/*
 * mlscheduler.cpp
 *
 *  Created on: Dec 9, 2017
 *      Author: amirhosein
 */

#include "mlscheduler.h"

MultiLevelScheduler::MultiLevelScheduler() {
	printf("ml\n");
}

MultiLevelScheduler::~MultiLevelScheduler() {
	// TODO Auto-generated destructor stub
}

Thread* MultiLevelScheduler::FindNextToRun() {
	return NULL;
}

void MultiLevelScheduler::ReadyToRun(Thread* t) {

}
