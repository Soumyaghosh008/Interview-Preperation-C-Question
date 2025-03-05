#include <stdio.h>

int main()
{
    int angle1, angle2, angle3, sum;

    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    sum = angle1 + angle2 + angle3;
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        if (angle1 < 90 && angle2 < 90 && angle3 < 90)
        {
            printf("The triangle is an Acute-Angled Triangle.\n");
        }
        else if (angle1 == 90 || angle2 == 90 || angle3 == 90)
        {
            printf("The triangle is a Right-Angled Triangle.\n");
        }
        else
        {
            printf("The triangle is an Obtuse-Angled Triangle.\n");
        }
    }
    else
    {
        printf("Triangle is not possible.\n");
    }

    return 0;
}