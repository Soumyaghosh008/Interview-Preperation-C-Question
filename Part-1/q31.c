#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter 2 Number: ");
    scanf("%d %d", &num1, &num2);

    if (num1 - num2 == 2 || num2 - num1 == 2)
    {

        for (int i = 2; i < num1 && i < num2; i++)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                printf("This is not a Twin Prime Number\n");
                break;
            }
        }
    }

    if (num1 == num1 && num2 == num2)
    {
        printf("This is Twin Prime Number \n");
    }
    return 0;
}