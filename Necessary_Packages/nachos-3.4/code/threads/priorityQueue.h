#pragma once
#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

/*
 * A simple priority Queue class. Using a vector to store
 * keys ensures that data structure can grow dynamically. Also
 * see we have vector of int. In a real world example we will
 * have vector of some real items like process information for
 * doing scheduling based on priority.
 */

class PriorityQueue {
    vector<int> pq;

    void shiftRight(int low, int high);

    void shiftLeft(int low, int high);

    void buildHeap();

public:
    PriorityQueue() {}

    PriorityQueue(vector<int> &items) {
        pq = items;
        buildHeap();
    }

    // Insert a new item into the priority queue
    void enqueue(int item);

    // Get the maximum element from the priority queue
    int dequeue();

    // just show the top of PQ
    int front();

    // return True if PQ is empty
    bool empty();

    // return the size of PQ
    int size();

    // Just for testing
    void print();
};
