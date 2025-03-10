#include <stdio.h>

int main()
{

    int n1, n2, gcd;

    printf("Enter 2 Number: ");
    scanf("%d %d", &n1, &n2);

    if (n1 == 1 || n2 == 0)
    {
        printf("Wrong Combination");
    }

    for (int i = 2; (i < n1 && i < n2); i++)
    {
        if (n1 % 2 == 0 && n2 % 2 == 0)
        {
            printf("This is not a Prime Number");
        }
    }

    if (n1 == n1 && n2 == n2)
    {
        while (n1 % n2 != 0)
        {
            gcd = n1 % n2;
            n1 = n2;
            n2 = gcd;
        }

        gcd = n2;

        if (gcd == 1)
        {
            printf("This is a Co-Prime Number");
        }
        else
        {
            printf("This is not a Co-Prime Number");
        }
    }

    return 0;
}