#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
    int pid=fork();
    if(pid==0)
    {
       sleep(2);
        printf("child\n");
    }
    else
    {  
    sleep(1);
    printf("parent\n");
    }
    return 0;
}
