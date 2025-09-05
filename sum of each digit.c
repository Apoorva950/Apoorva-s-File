#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	while(n!=0)
	{
		int d=n%10;
		printf("%d",d);
		sum=sum+d;
		n=n/10;
	}
	printf("%d",sum);
}
