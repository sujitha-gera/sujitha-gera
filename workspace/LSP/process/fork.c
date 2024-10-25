#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
	int a=5,b=8;
	int pid=fork();
	if(pid==0)
	{
		a=a+5;
		b=b-2;
		exit(0);
	}
	else
	{
		wait(NULL);
		printf("sum is:%d\n",a+b);
	}
	return 0;
}
