#include "syscall.h"

int main()
{
    int pid = Fork();
    if (pid == 0)
    {
        int i;
        int a;
        for (i = 0; i < 1000; i++)
            a = 5;

        Exit(a);
    }
    else
    {
        Join(pid);
        Exit(100);
    }
    /* not reached */
}