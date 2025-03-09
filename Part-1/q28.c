#include <stdio.h>
int main()
{
    int ornum, num, revnum = 0, rem;

    printf("Enter A Prime Number (2 Digit): ");
    scanf("%d", &num);

    ornum = num;

    while (num != 0)
    {
        rem = num % 10;
        revnum = revnum * 10 + rem;
        num /= 10;
    }

    printf("Twested nmber: %d \n", revnum);

    for (int i = 2; i < revnum; i++)
    {
        if (revnum % i == 0)
        {
            printf("This is not Twisted Pair Prime Number \n");
            break;
        }
    }

    if (revnum == revnum)
    {
        printf("This is Twisted Pair Prime Number \n");
    }
    return 0;
}