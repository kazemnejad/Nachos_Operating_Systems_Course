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
using namespace std;

SjfScheduler::SjfScheduler() {
    std::cout << "starting!!! sjf" << std::endl;
    std::unordered_map <std::string, std::vector<int>> burst_times;
}

SjfScheduler::~SjfScheduler() {
    // TODO Auto-generated destructor stub
}

void SjfScheduler::ReadyToRun(Thread *t) {
    auto now_time = std::chrono::high_resolution_clock::now();
    auto nanos = duration_cast<nanoseconds>(now_time.time_since_epoch()).count();
    burst_times.insert({t, nanos - last_time});
    last_time = nanos;


}

Thread *SjfScheduler::FindNextToRun() {
    long long int min_time = last_time;
    Thread *min_thread = nullptr;
    for (pair < Thread * , long long int > element:burst_times) {
        if (element.second < min_time) {
            min_thread = element.first;
            min_time = element.second;
        }

    }
    if (min_thread == nullptr) {
    } else {
        burst_times.erase(min_thread);
    }
    return min_thread;
}
