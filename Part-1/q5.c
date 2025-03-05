#include <stdio.h>

int main()
{
    float side, volume;

    printf("Enter the side of the cube: ");
    scanf("%f", &side);

    volume = side * side * side;

    printf("Volume of the cube: %.2f\n", volume);

    return 0;
}