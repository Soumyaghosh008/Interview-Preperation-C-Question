#include <stdio.h>
#include <math.h>

int main()
{
    int n, f = 0, ornum, x, armnum = 0, rem;

    printf("Enter The Number: ");
    scanf("%d", &n);

    x = n;
    ornum = n;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        f++;
    }

    while (x != 0)
    {
        rem = x % 10;
        armnum += pow(rem, f);
        x /= 10;
    }

    if (ornum == armnum)
    {
        printf("This is Armstrong Number");
    }
    else
    {
        printf("This is not");
    }

    return 0;
}