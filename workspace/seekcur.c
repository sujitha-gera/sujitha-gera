#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd=open("seeking.txt",O_RDWR);
	char buff[10];
	lseek(fd,5,SEEK_CUR);
	read(fd,buff,10);
	write(1,buff,10);
	printf("\n");
	lseek(fd,8,SEEK_SET);
	read(fd,buff,10);
	write(1,buff,10);
	printf("\n");
	close(fd);
	return 0;
}
