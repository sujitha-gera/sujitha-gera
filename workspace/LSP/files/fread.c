#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
#include<string.h>
#include<stdio.h>

int main()
{
	int fd=open("read.txt",O_RDWR);
	if(fd<0)
		perror("failed to open");
	char str[100];
	int rd=read(fd,str,sizeof(str));
	if(rd<0)
		perror("failed to read");
	printf("reading is completed..\n");
	printf("data:%s",str);
	close(fd);
	return 0;
}
