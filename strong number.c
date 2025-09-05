#include <stdio.h>
int fact(int n)
{
    int i, fact=1;
    for(i=1;i<=n;i++)
    {
    	fact*=i;
	}
	return fact;
}
int main()
{
    int i,sum=0,copy_n,d,n;
    printf("Enter the n value:");
    scanf("%d",&n);
    copy_n=n;
    while(n!=0)
    {
        d=n%10;
        sum+=fact(d);
        n/=10;
    }
    if(copy_n==sum)
        printf("\n%d is a STRONG number",copy_n);
    else
        printf("\n%d is not a STRONG number",copy_n);
    return 0;
}
