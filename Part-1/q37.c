#include <stdio.h>
int main()
{
    double f = 1, num, sum = 0;

    printf("Enter the Number: ");
    scanf("%lf", &num);

    for (int i = 1; i < num; i++)
    {
        f *= i;
        sum += f;
    }

    printf("The Answer is: %.2lf", sum);

    return 0;
}