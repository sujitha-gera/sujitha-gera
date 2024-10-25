#include<unistd.h>
#include<stdio.h>
#include<errno.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	int fd=open("suji.txt",O_RDWR);
	if(fd<0){
		perror("failed to open fd file..\n");
	}
	char str[]="mirafra";
	int res=write(fd,str,sizeof(str));
	if(res<0){
		perror("failed to write the data\n");
	}else{
	printf("data written successfully...\n");
	}
	printf("the data present in fd file is :%s\n",str);
	close(fd);
	return 0;
}

