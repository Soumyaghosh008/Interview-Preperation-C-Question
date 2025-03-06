#include <stdio.h>

int main()
{
    double a, sum = 0.0;
    int n;

    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        sum += a / i;
    }

    printf("Sum of the series: %.6lf\n", sum);

    return 0;
}
