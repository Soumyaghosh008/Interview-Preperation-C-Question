#include <stdio.h>

int mian()
{
    int num, sq;

    printf("Enter The Number: ");
    scanf("%d", &num);

    sq = num * num;

    int rem = sq % 10;

    if (rem == num)
    {
        printf("this is a Atmorphic Number");
    }
    else
    {
        printf("This is Not");
    }
    return 0;
}