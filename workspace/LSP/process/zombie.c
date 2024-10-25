#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
    int pid=fork();
    if(pid==0)
    {
       
        printf("child\n");
    }
    else
    {  
        printf("parent\n");
	getchar();
    }
    return 0;
}
