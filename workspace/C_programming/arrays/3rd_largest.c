#include<stdio.h>
void main()
{
	int a[]={1,2,3,4,5};
	int l=0,s=0,t=0;
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		if(a[i]>l)
		{
			t=s;
			s=l;
			l=a[i];
		}
		else if(a[i]>s)
		{
			t=s;
			s=l;
		}
		else
			t=a[i];
	}
	printf("3rd largest value in array=%d\n",t);
}
