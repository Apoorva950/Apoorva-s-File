#include<stdio.h>
int main()
{
	int n,sum=0,count_digit=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	while(n!=0)
	{
		int d=n%10;
		sum=sum+d;
		n=n/10;
		count_digit++;
		
	}
	printf("%d",count_digit);
}
