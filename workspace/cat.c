#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>

int main()
{
	int fd=open("output.txt",O_RDONLY);
	if(fd<0)
		perror("failed to open fle\n");
	int rd;
	char str[10];
	while((rd=read(fd,str,sizeof(str)))>0)
	{
		write(1,str,rd);
	}
//	rd=read(fd,str,sizeof(str));
//	if(rd<0)
//		perror("failed to read");
//	else
//		write(1,str,rd);
	close(fd);
	return 0;
}
