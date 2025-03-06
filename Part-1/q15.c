#include <stdio.h>

int main()
{
    int start, count = 0, num, is_prime;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("First 50 prime numbers starting from %d:\n", start);

    num = start;
    while (count < 50)
    {
        is_prime = 1;
        if (num < 2)
        {
            is_prime = 0;
        }
        else
        {
            for (int i = 2; i * i <= num; i++)
            {
                if (num % i == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
        }

        if (is_prime)
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");

    return 0;
}
