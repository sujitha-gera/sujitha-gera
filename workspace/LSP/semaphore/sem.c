#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>

sem_t pid;

void *fun(void *arg)
{
	sem_wait(&pid);
	printf("entered thread\n");
	sleep(2);
	printf("thread ended...\n");
	sem_post(&pid);
}
int main()
{
	sem_init(&pid,0,1);
	pthread_t tid;
	pthread_create(&tid,NULL,fun,NULL);
	pthread_exit(NULL);
	sem_destroy(&pid);
	return 0;
}
