#include<stdio.h>
#include<sys/socket.h>
int main()
{
	int soc;
	soc=socket(AF_INET,SOCK_STREAM,0);
	if(soc==-1)
		printf("failed to crate socket\n");
	else
		printf("socket created successfully\n");
	return 0;
}
