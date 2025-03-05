#include <stdio.h>

int main()
{
    int n, sum = 0, rem, sq;
    printf("Enter The Number: ");
    scanf("%d", &n);

    sq = n * n;

    while (sq != 0)
    {
        rem = sq % 10;
        sum += rem;
        sq /= 10;
    }

    if (sum == n)
    {
        printf("This is Neon Number");
    }
    else
    {
        printf("This is not");
    }

    return 0;
}