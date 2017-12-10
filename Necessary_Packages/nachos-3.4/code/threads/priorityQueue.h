#pragma once
#include <vector>
#include <iostream>
#include <cassert>
#include "thread.h"

using namespace std;

/*
 * A simple priority Queue class. Using a vector to store
 * keys ensures that data structure can grow dynamically. Also
 * see we have vector of int. In a real world example we will
 * have vector of some real items like process information for
 * doing scheduling based on priority.
 */

struct node {
	Thread* thread;
	int priority;
};

class PriorityQueue {
    vector<node> pq;

    void shiftRight(int low, int high);

    void shiftLeft(int low, int high);

    void buildHeap();

public:
    PriorityQueue() {}

    PriorityQueue(vector<node> &items) {
        pq = items;
        buildHeap();
    }

    // Insert a new item into the priority queue
    void enqueue(node item);

    // Get the maximum element from the priority queue
    node dequeue();

    // just show the top of PQ
    node front();

    // return True if PQ is empty
    bool empty();

    // return the size of PQ
    int size();

    // Just for testing
    void print();
};
