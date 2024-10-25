#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
	int fd=open("seeking.txt",O_RDWR);
	if(fd<0)
		perror("failed to open file\n");
	char buf[10];
	read(fd,buf,10);
	write(1,buf,10);
	int fd1=lseek(fd,5,SEEK_SET);
	read(fd,buf,10);
	write(1,buf,10);
 	int fd2=lseek(fd,"HELLO",SEEK_CUR);
	printf("fd2-%d\n",fd2);
	write(1,buf,10);
	return 0;
}
