
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int id(void)
{
    pid_t id;
    id = getpid();
    printf("the PID is: %i\n", id);
    while(1);
    {
        sleep(5);
    }
}