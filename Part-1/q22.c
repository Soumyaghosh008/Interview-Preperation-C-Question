#include <stdio.h>

int main()
{

    int num, f = 1;

    printf("Enter The Number: ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        if (num % f == 0)
        {
            printf("%4d", f);
        }
        f++;
    }
}