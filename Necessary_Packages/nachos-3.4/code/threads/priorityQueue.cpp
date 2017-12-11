#include "priorityQueue.h"
#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

/*
 * --------------------------------------------- Read me ---------------------------------------------
 * the PQ is implemented as an heap and the heap here is represented as a vector.
 * so node i has 2 child, one in (2 * i) + 1 and another in (2 * i) + 2
 * when we enqueue an item it goes to the rightmost place of vector.
 * so to heapify the PQ we have to shift the new element to left until it finds the right place.
 * and when we dequeue, we pop the first element of PQ (as it is the max always),
 * then put the last element in its place and finally shift it to right until it finds the right place.
 * ---------------------------------------------------------------------------------------------------
 */

/*
 * enqueue an item tu the PQ as the last element
 * final: do one "ShiftLeft"
 */
void PriorityQueue::enqueue(node item) {
    pq.push_back(item);
    shiftLeft(0, pq.size() - 1);
}

/*
 * swaps the first and the last element of PQ
 * then return the last element
 * final: do one "ShiftRight"
 */
node PriorityQueue::dequeue() {
    assert(!pq.empty());
    int last = pq.size() - 1;
    node tmp = pq[0];
    pq[0] = pq[last];
    pq[last] = tmp;
    pq.pop_back();
    shiftRight(0, last - 1);
    return tmp;
}

// just for testing
void PriorityQueue::print() {
    int size = pq.size();
    for (int i = 0; i < size; ++i)
        cout << pq[i].thread->getName() << "::"<< pq[i].priority << "   ";
    cout << endl;
}

// to heapify when enqueue
void PriorityQueue::shiftLeft(int low, int high) {
    int child = high;
    while (child > low) {
        int parentIdx = (child - 1) / 2;
        // if child is bigger than parent we need to swap
        if (pq[child].priority > pq[parentIdx].priority) {
            node tmp = pq[child];
            pq[child] = pq[parentIdx];
            pq[parentIdx] = tmp;
            // Make parent index the child and shift towards left
            child = parentIdx;
        } else {
            break;
        }
    }
}

// to heapify when dequeue
void PriorityQueue::shiftRight(int low, int high) {
    int root = low;
    while ((root * 2) + 1 <= high) {
        int leftChild = (root * 2) + 1;
        int rightChild = leftChild + 1;
        int swap = root;

        // Check if root is less than left child
        if (pq[swap].priority < pq[leftChild].priority) {
            swap = leftChild;
        }

        // If right child exists check if it is less than current root
        if ((rightChild <= high) && (pq[swap].priority < pq[rightChild].priority)) {
            swap = rightChild;
        }

        // Make the biggest element of root, left and right child the root
        if (swap != root) {
            node tmp = pq[root];
            pq[root] = pq[swap];
            pq[swap] = tmp;
            /*
             * Keep shifting right and ensure that swapIdx satisfies
             * heap property aka left and right child of it is smaller than itself
             */
            root = swap;
        } else {
            break;
        }
    }
}

void PriorityQueue::buildHeap() {
    /*
     * Start with middle element. Middle element is chosen in
     * such a way that the last element of array is either its left child or right child
     */
    int size = pq.size();
    int mid = (size - 2) / 2;
    while (mid >= 0) {
        shiftRight(mid, size - 1);
        --mid;
    }
}

node PriorityQueue::front() {
    return pq[0];
}

bool PriorityQueue::empty() {
    return pq.size() == 0;
}

int PriorityQueue::size() {
    return pq.size();
}
