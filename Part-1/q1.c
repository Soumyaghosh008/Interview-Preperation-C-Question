#include <stdio.h>
#include <math.h>

int main()
{
    float length, breadth, result;
    int choice;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    int ar = length * breadth;
    printf("Area of the rectangle: %.2f\n", ar);

    int pr = 2 * (length + breadth);
    printf("Perimeter of the rectangle: %.2f\n", pr);

    int dr = sqrt(length * length + breadth * breadth);
    printf("Diagonal of the rectangle: %.2f\n", dr);

    return 0;
}