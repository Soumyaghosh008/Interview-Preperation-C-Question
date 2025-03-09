#include <stdio.h>

int main()
{
    int num1, num2, gcd, lcm, mul;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    mul = num1 * num2;

    while (num1 % num2 != 0)
    {
        gcd = num1 % num2;
        num1 = num1 ^ num2;
        num2 = num2 ^ gcd;
    }

    lcm = mul / gcd;
    printf("The LCM is:: %d \n", lcm);

    return 0;
}