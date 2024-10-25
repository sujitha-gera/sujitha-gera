#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x=8,y;
	y=x/0;   //SIGFPE
//	char *ptr;
//	x=*ptr;  //SIGSEGV --> SEgmentation fault
	return 0;
}
