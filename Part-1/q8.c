#include <stdio.h>

int main()
{
    int num1, num2, gcd, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (i = (num1 < num2 ? num1 : num2); i > 0; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
            break;
        }
    }

    printf("The Greatest Divisor: %d\n", gcd);

    return 0;
}