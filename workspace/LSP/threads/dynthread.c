#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
typedef struct
{
	int *data;
	int size;
}thread;
void *fun(void *arg)
{
	thread *data=(thread*)arg;
	int *thread_data=(int*)malloc(data->size*sizeof(int));
	for(int i=1;i<data->size;i++)
	{
		thread_data[i]=i;
	}
	printf("thread data:");
	for(int i=1;i<data->size;i++)
	{
		printf("%d ",thread_data[i]);
	}
	free(thread_data);
}
void main()
{
	thread *data=(thread*)malloc(sizeof(thread));
	data->size=6;
	data->data=(int*)malloc(data->size*sizeof(int));
	pthread_t tid;
	pthread_create(&tid,NULL,fun,data);
	pthread_exit(NULL);
	free(data->data);
	free(data);
}
