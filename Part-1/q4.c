#include <stdio.h>
#define PI 3.14159

int main()
{
    float radius, surface_area;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    surface_area = 4 * PI * radius * radius;

    printf("Surface area of the sphere: %.2f\n", surface_area);

    return 0;
}
