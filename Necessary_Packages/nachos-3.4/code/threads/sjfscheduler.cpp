/*
 * sjfscheduler.cpp
 *
 *  Created on: Dec 9, 2017
 *      Author: amirhosein
 */

#include "sjfscheduler.h"
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <chrono>
using namespace std::chrono;

SjfScheduler::SjfScheduler() {
	std::cout << "BULLshi!!! sjf" << std::endl;
	std::unordered_map<std::string, std::vector<int>> burst_times;
//	std::vector<int> burst_times;
}

SjfScheduler::~SjfScheduler() {
	// TODO Auto-generated destructor stub
}

void SjfScheduler::ReadyToRun(Thread* t) {
	std::string thread_name = t->getName();
	std::cout <<"ReadyToRun sjf"<<std::endl;
    auto start = std::chrono::high_resolution_clock::now();
    auto nanos = duration_cast<nanoseconds>(start.time_since_epoch()).count();
    // operation to be timed ...

    auto finish = std::chrono::high_resolution_clock::now();
//    std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(finish-start).count() << "ns\n";
    std::cout << nanos << "ns\n";



}

Thread* SjfScheduler::FindNextToRun(){
	return NULL;
}
