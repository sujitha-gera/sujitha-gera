#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>
#include<fcntl.h>

int main()
{
	int source=open("input.txt",O_RDWR);
	int dest=open("output.txt",O_WRONLY);
	if(source<0)
		perror("failed to open input.txt file\n");
	if(dest<0)
		perror("failed to open output.txt file\n");
	char *str;
	int rd=read(source,str,sizeof(str));
	if(rd<0)
		perror("failed to read\n");
	int wr=write(dest,str,sizeof(str));
	if(wr<0)
		perror("failed to write\n");
	else
		printf("written completed\n");
	close(source);
	close(dest);
	return 0;
}
