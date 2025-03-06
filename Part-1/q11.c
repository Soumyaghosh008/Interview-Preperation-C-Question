#include <stdio.h>

int main()
{
    int num, sum_even = 0, sum_negative_odd = 0;

    printf("Enter numbers (enter 0 to stop): \n");

    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        if (num > 0 && num % 2 == 0)
        {
            sum_even += num;
        }
        else if (num < 0 && num % 2 != 0)
        {
            sum_negative_odd += num;
        }
    }

    printf("Sum of positive even numbers: %d\n", sum_even);
    printf("Sum of negative odd numbers: %d\n", sum_negative_odd);

    return 0;
}