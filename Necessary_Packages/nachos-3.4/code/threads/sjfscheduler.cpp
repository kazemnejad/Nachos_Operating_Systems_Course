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

bool SJF::comparison(Process a, Process b) {
	return (a.bt < b.bt);
}
void SJF::findWaitingTime(Process *proc, int n, int *wt) {
	// waiting time for first process is 0
	wt[0] = 0;

	// calculating waiting time
	for (int i = 1; i < n ; i++ )
		wt[i] = proc[i-1].bt + wt[i-1] ;
}
void SJF::findTurnAroundTime(Process *proc, int n, int *wt, int *tat) {
	// calculating turnaround time by adding
	// bt[i] + wt[i]
	for (int i = 0; i < n ; i++)
		tat[i] = proc[i].bt + wt[i];
}
void SJF::findavgTime(Process *proc, int n) {
	int wt[n], tat[n], total_wt = 0, total_tat = 0;

	// Function to find waiting time of all processes
	findWaitingTime(proc, n, wt);

	// Function to find turn around time for all processes
	findTurnAroundTime(proc, n, wt, tat);

	// Display processes along with all details
	cout << "\nProcesses "<< " Burst time "
		 << " Waiting time " << " Turn around time\n";

	// Calculate total waiting time and total turn
	// around time
	for (int i = 0; i < n; i++)
	{
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		cout << " " << proc[i].pid << "\t\t"
			 << proc[i].bt << "\t " << wt[i]
			 << "\t\t " << tat[i] <<endl;
	}

	cout << "Average waiting time = "
		 << (float)total_wt / (float)n;
	cout << "\nAverage turn around time = "
		 << (float)total_tat / (float)n;
}

