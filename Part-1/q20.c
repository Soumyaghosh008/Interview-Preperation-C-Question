#include <stdio.h>
#include <math.h>

int main()
{
    int a, n, p = 2;
    double x, s = 1.0, f = 1.0;

    printf("Enter The Value of A & N: ");
    scanf("%d %d", &a, &n);

    for (int i = 1; i <= n; i++)
    {
        x = pow(a, p);
        f *= i;
        s += x / f;
        p++;
    }

    printf("The answer is: %.2f\n", s);
    return 0;
}
