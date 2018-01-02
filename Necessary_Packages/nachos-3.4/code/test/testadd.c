/* sort.c 
 *    Test program to sort a large number of integers.
 *
 *    Intention is to stress virtual memory system.
 *
 *    Ideally, we could read the unsorted array off of the file system,
 *	and store the result back to the file system!
 */

#include "syscall.h"

int A[10]; /* size of physical memory; with code, we'll run out of space!*/

void an()
{
    int i = 10;
    i++;
    Exit(10);
    return;
}

int main()
{
    int i, j, tmp;

    /* first initialize the array, in reverse sorted order */
    for (i = 0; i < 10; i++)
        A[i] = 10 - i;

    int an = Fork();
    Exit(an);

    // Fork(an);

    /* then sort! */
    for (i = 0; i < 9; i++)
        for (j = 0; j < (9 - i); j++)
            if (A[j] > A[j + 1])
            { /* out of order -> need to swap ! */
                tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
            }

    Exit(6); /* and then we're done -- should be 0! */
}
