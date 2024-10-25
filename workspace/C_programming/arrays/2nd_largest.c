#include<stdio.h>
void main()
{
	int a[]={1,2,3,4,5};
	int l=0,s=0;
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		if(a[i]>l)
		{
			s=l;
			l=a[i];
		}
		else if(a[i]>s)
			s=a[i];
	}
	printf("2nd largest element=%d\n",s);
}
