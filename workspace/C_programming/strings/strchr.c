#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="helloworld";
	char b='l';
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]==b){
			break;
		}
		i++;
	}
	printf("1st occurance is at index :%d\n",i);
}
