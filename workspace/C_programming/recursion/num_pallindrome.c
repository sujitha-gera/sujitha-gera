#include<stdio.h>
int num;
int pallindrome(int n)
{
	static int r=0;
	if(n!=0)
	{
		r=r*10+n%10;
		pallindrome(n/10);
	}
	else if(r==num)
		printf("%d is pallindrome\n",num);
	else
		printf("%d is not pallindrome\n",num);
	return 0;
}
int main()
{
	printf("enter number:");
	scanf("%d",&num);
	pallindrome(num);
	return 0;
}
