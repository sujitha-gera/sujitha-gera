#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
	int fd=open("seeking.txt",O_RDWR);
	char buff[10];
	lseek(fd,-5,SEEK_END);
	read(fd,buff,5);
	write(1,buff,5);
	close(fd);
	return 0;
}
