#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>

char buff[5];
int count=0;
sem_t p,c;

void *producer(void *arg)
{
	int i=0;
	char ch='A';
	while(1)
	{
		sem_wait(&p);
		while(count==5);
		buff[i]=ch;
		i=(i+1)%5;
		ch++;
		if(i==0)
		{
			sleep(1);
			ch='A';
			printf("transmited data:%s\n",buff);
		}
		count++;
		sem_post(&c);
	}
	pthread_exit(NULL);
}

void *consumer(void *arg)
{
	int j=0;
	char data[5];
	while(1)
	{
		sem_wait(&c);
		while(count==0);
		data[j]=buff[j];
		j=(j+1)%5;
		if(j==0)
		{
			sleep(1);
			printf("received data:%s\n",data);
		}
		count--;
		sem_post(&p);
	}
	pthread_exit(NULL);
}

int main()
{
	sem_init(&p,0,1);
	sem_init(&c,0,0);
	pthread_t prod,cons;
	pthread_create(&prod,NULL,producer,NULL);
	pthread_create(&cons,NULL,consumer,NULL);
	pthread_join(prod,NULL);
	pthread_join(cons,NULL);
	sem_destroy(&p);
	sem_destroy(&c);
	pthread_exit(NULL);
	return 0;
}
