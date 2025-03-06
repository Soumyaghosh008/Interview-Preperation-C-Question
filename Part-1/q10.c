#include <stdio.h>

int main()
{
    int numbers[10], i, greatest, smallest;

    printf("Enter 10 different numbers: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    greatest = smallest = numbers[0];

    for (i = 1; i < 10; i++)
    {
        if (numbers[i] > greatest)
        {
            greatest = numbers[i];
        }
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    printf("Greatest number: %d\n", greatest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}