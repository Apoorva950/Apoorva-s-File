#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("\n Before swaping:");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swaping %d,%d",a,b);
}
