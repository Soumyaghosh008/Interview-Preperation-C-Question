#include <stdio.h>
int main()
{
    int sum = 0, n, rem;

    printf("Enter The Number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    printf("The Sumation is: %d", sum);
    return 0;
}