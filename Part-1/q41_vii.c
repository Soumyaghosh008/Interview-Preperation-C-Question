#include <stdio.h>

int main()
{
    int num, rem;
    int binary[32], i = 0;

    printf("Enter The Number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("0");
        return 0;
    }

    while (num > 0)
    {
        rem = num % 2;
        binary[i++] = rem;
        num /= 2;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
