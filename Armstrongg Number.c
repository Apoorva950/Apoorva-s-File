#include <stdio.h>
int main()
{
    int num, d1, d2, d3;

    printf("Enter the 3 digit number: ");
    scanf("%d", &num);

    d1 = num / 100;        
    d2 = (num / 10) % 10;  
    d3 = num % 10;          

    if (num == (d1*d1*d1 + d2*d2*d2 + d3*d3*d3))
    {
        printf("%d is an Armstrong Number\n", num);
    }
    else
    {
        printf("%d is not an Armstrong Number\n", num);
    }

    return 0;
}
