#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *fun(void *arg)
{
	char *s=(char*)arg;
	printf("%s\n",s);
	pthread_exit(NULL);
}
int main()
{
	pthread_t tid;
	pthread_create(&tid,NULL,fun,"mirafra");
	pthread_exit(NULL);
	return 0;
}
