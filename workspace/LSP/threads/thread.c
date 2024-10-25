#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void *fun(void *arg)
{
	int *data=(int*)malloc(sizeof(int));
	*data=10;
	printf("thread data:%d and thread memory:%p\n",*data,data);
	free(data);
}
void main()
{
	pthread_t tid;
	pthread_create(&tid,NULL,fun,NULL);
	pthread_exit(NULL);
}
