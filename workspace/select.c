#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/time.h>

int main()
{
	fd_set rd;
	struct timeval tv;
	int err;
	FD_ZERO(&rd);
	FD_SET(0,&rd);
	tv.tv_sec=4;
	tv.tv_usec=0;
	err=select(1,&rd,NULL,NULL,&tv);
	if(err==0) //timeout
		printf("select timeout\n");
	else if(err==-1) //fail
		printf("failure of select\n");
	else //success
		printf("data available\n");
	return 0;
}
