#include <stdio.h>

int main()
{

    int num, n_sum = 0, p_sum = 0;

    do
    {
        printf("Enter The Number: ");
        scanf("%d", &num);

        if (num > 0)
        {
            p_sum += num;
        }
        else
        {
            n_sum += num;
        }

    } while (num != 0);

    printf("The Sumation of Positive Numbers: %d \n", p_sum);
    printf("The Sumation of Negetive Numbers: %d \n", n_sum);

    return 0;
}