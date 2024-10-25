#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	int f;
	char buff[50];
	f=open("seeking.txt",O_RDWR);
	lseek(f,5,SEEK_SET);
	read(f,buff,10);
	write(1,buff,10);
	printf("\n");
	lseek(f,8,SEEK_CUR);
	read(f,buff,10);
	write(1,buff,10);
	printf("\n");
int l=	lseek(f,-3,SEEK_END);
printf("l-%d\n",l);
read(f,buff,10);
	printf("%s\n",buff);
	printf("SIZE-%ld\n",strlen(buff));
	write(1,buff,3);
	printf("\n");
	return 0;
}
