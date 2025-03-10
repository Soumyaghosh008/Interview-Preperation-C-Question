#include <stdio.h>

int main()
{
    int num1, num2, gcd, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    while (num1 % num2 != 0)
    {
        gcd = num1 % num2;
        num1 = num2;
        num2 = gcd;
    }
    gcd = num2;

    printf("The Greatest Divisor: %d\n", gcd);

    return 0;
}