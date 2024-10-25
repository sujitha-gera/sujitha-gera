#include<stdio.h>
#include<unistd.h>
#include<sys/select.h>
#include<string.h>
int main()
{
	fd_set rd;
	char buff[100];
	FD_ZERO(&rd);
	FD_SET(0,&rd);
	if(select(1,&rd,NULL,NULL,NULL)>0)
	{
		read(0,buff,sizeof(buff));
		printf("input:%s",buff);
	}
	return 0;
}
