#include <stdio.h>
#include <math.h>

int main()
{
    int n, ornum, revnum = 0, rem;

    printf("Enter The Number: ");
    scanf("%d", &n);

    ornum = n;

    while (n != 0)
    {
        rem = n % 10;
        revnum = revnum * 10 + rem;
        n /= 10;
    }

    if (ornum == revnum)
    {
        printf("This is Palindrome Number");
    }
    else
    {
        printf("This is not");
    }

    return 0;
}