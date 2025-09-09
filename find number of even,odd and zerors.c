
#include <stdio.h>

int main() {
    long long num;       // to store big number
    int odd = 0, even = 0, zero = 0;
    int digit;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num == 0) {
        zero = 1;   // if number itself is 0
    }

    while (num != 0) {
        digit = num % 10;     // get last digit
        if (digit == 0) {
            zero++;
        } else if (digit % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        num = num / 10;       // remove last digit
    }

    printf("Odd digits : %d\n", odd);
    printf("Even digits: %d\n", even);
    printf("Zeros      : %d\n", zero);

    return 0;
}


