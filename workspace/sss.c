#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>

void fun(int suji)
{
	printf("cought SIGINT existing\n");
	exit(0);
}

int main()
{
	signal(SIGINT,fun);
	while(1)
	{
		sleep(1);
		printf("hello world...\n");
		printf("enter ctrl+c to stop\n");
	}
	return 0;
}
