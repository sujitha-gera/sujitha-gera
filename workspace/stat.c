#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>

int main()
{
	struct stat sfile;  //pointer to stat struct
	stat("stat.c",&sfile); 
	printf("st_mode=%o\n",sfile.st_mode);//accessing data member of stat struct
	return 0;
}
