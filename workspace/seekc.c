#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>

int main()
{
	int f;
	char buff[10];
	f=open("seeking.txt",O_RDWR);
	read(f,buff,10);
	write(1,buff,10);
	printf("\n");
	lseek(f,5,SEEK_CUR);
	read(f,buff,10);
	write(1,buff,10);
	close(f);
	return 0;
}
