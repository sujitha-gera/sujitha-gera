#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char str[])
{
	if(*str)
	{
		reverse(str+1);
		printf("%c",*str);
	}
}
int main()
{
	char a[]="hello world";
	reverse(a);
	return 0;
}
