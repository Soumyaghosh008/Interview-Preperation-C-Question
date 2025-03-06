#include <stdio.h>

int main()
{
    int choice, num, i, is_composite, smallest_digit;

    printf("Menu:\n");
    printf("1. Check if a number is Composite\n");
    printf("2. Find the smallest digit in a number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter a number: ");
        scanf("%d", &num);
        is_composite = 0;
        if (num > 1)
        {
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    is_composite = 1;
                    break;
                }
            }
        }
        if (is_composite)
        {
            printf("%d is a Composite number.\n", num);
        }
        else
        {
            printf("%d is NOT a Composite number.\n", num);
        }
        break;

    case 2:
        printf("Enter a number: ");
        scanf("%d", &num);

        smallest_digit = 9;
        while (num > 0)
        {
            int digit = num % 10;
            if (digit < smallest_digit)
            {
                smallest_digit = digit;
            }
            num /= 10;
        }
        printf("The smallest digit is: %d\n", smallest_digit);
        break;

    default:
        printf("Invalid choice! Please select a valid option.\n");
    }

    return 0;
}
