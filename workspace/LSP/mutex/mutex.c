#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>

pthread_t tid[2];
pthread_mutex_t pid;
int counter;

void *fun(void *arg)
{
	pthread_mutex_lock(&pid);
	int i=0;
	counter+=1;
	printf("job %d has started\n",counter);
	for(i=0;i<(0xffffffff);i++);
	printf("job %d is finished...\n",counter);
	pthread_mutex_unlock(&pid);
	return NULL;
}
int main()
{
	int i=0;
	int error;
	if(pthread_mutex_init(&pid,NULL)!=0)
	{
		printf("mutex init has failed\n");
	}
	while(i<2)
	{
		error=pthread_create(&tid[i],NULL,fun,NULL);
		if(error!=0)
		{
			printf("thread can't be created:[%s]",strerror(error));
		}
		i++;
	}
	pthread_join(tid[0],NULL);
	pthread_join(tid[1],NULL);
	pthread_mutex_destroy(&pid);
	return 0;
}
