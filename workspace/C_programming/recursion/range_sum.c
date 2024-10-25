//Adding a range of numbers
#include<stdio.h>
#include<stdlib.h>

int sum(int num)
{
	if(num>0)
		return num+sum(num-1);
	else
		return 0;
}

int main()
{
	int result=sum(10);
	printf("sum=%d\n",result);
	return 0;
}
