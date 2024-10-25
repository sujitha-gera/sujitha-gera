//factorial of given number
#include<stdio.h>
#include<stdlib.h>

int fact(int num)
{
	if(num==0 || num==1)
		return 1;
	else
		return num*fact(num-1);
}
int main()
{
	int res=fact(5);
	printf("fact=%d\n",res);
	return 0;
}
