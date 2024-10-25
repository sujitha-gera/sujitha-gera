#include<stdio.h>
void main()
{
	int a[]={121,101,45654,221,12321};
	int r=0,temp,l=0;
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		temp=a[i];
		while(temp>0)
		{
			r=r*10+temp%10;
			temp=temp/10;
		}
		if(r==a[i])
		{
			if(a[i]>l)
				l=a[i];
		}
		r=0;
	}
	printf("largest palindrome is:%d\n",l);
}
