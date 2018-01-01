/* halt.c
 *	Simple program to test whether running a user program works.
 *	
 *	Just do a "syscall" that shuts down the OS.
 *
 * 	NOTE: for some reason, user programs with global data structures 
 *	sometimes haven't worked in the Nachos environment.  So be careful
 *	out there!  One option is to allocate data structures as 
 * 	automatics within a procedure, but if you do this, you have to
 *	be careful to allocate a big enough stack to hold the automatics!
 */

#include "syscall.h"

int a[10];

int main()
{
    a[1] = 6;
    a[2] = 5;
    a[3] = 4;
    a[4] = 3;
    a[5] = 2;
    a[1] = 6;
    a[2] = 5;
    a[3] = 4;
    a[4] = 3;
    a[5] = 2;
    a[1] = 6;
    a[2] = 5;
    a[3] = 4;
    a[4] = 3;
    a[5] = 2;
    a[1] = 6;
    a[2] = 5;
    a[3] = 4;
    a[4] = 3;
    a[5] = 2;
    a[1] = 6;
    a[2] = 5;
    a[3] = 4;
    a[4] = 3;
    a[5] = 2;
    a[1] = 6;
    a[2] = 5;
    a[3] = 4;
    a[4] = 3;
    a[5] = 2;
    a[1] = 6;
    a[2] = 5;
    a[3] = 4;
    a[4] = 3;
    a[5] = 2;

    Exit(0);
}
