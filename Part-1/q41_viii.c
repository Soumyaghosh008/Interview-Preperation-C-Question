#include <stdio.h>
#include <math.h>

int main()
{

    int num, rem, i = 0, sum = 0;

    printf("Enter The Number:  ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        sum += rem * pow(2, i);
        num /= 10;
        i++;
    }

    printf("The Decimal Value is: %d", sum);
    return 0;
}