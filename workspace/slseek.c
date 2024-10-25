#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>

int main()
{
	int fd=open("seeking.txt",O_RDWR);
	if(fd<0)
		perror("failed to open fail\n");
	char *buf;
	lseek(fd,0,SEEK_SET);
	read(fd,buf,10);
	write(1,buf,sizeof(buf));
	printf("read data:%s\n",buf);
	lseek(fd,5,SEEK_SET);
	read(fd,buf,10);
	write(1,buf,sizeof(buf));
	fclose(fd);
	return 0;
}
