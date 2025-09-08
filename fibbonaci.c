#include<stdio.h>
int main()
{
	int n=10,f0=0,f1=1,f2=0;
	int i;
	printf("%d ",f0);
	printf("%d ",f1);
	f2=f0+f1;
	printf("%d ",f2);
	f0=f1;
	f1=f2;
	for(i=1;i<=n-3;i++)
	{
		f0=f1;
		f1=f2;
		f2=f0+f1;
		printf("%d ",f2);
	}
}
