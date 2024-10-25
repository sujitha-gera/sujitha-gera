#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
	pid_t pid=fork();
	if(pid<0)
	{
		printf("fork fail\n");
	}
	else if(pid==0)
	{
		char *args[]={"hello",NULL,NULL};
		execv(args[0],args);
	}
	wait(NULL);
	return 0;
}
