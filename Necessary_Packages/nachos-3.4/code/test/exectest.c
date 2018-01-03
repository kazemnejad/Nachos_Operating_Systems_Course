#include "syscall.h"

int main()
{
    int pid = Exec("../test/sort", 12);
    if (pid != 0)
        Join(pid);
    
    Exit(pid);
}