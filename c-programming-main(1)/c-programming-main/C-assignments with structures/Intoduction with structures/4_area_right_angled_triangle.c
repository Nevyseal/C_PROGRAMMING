#include <stdio.h>
#include <stdlib.h>

struct triangle
{
    float base, height, area;
};

int main()
{
    struct triangle tri_1;

    // Input
    printf("\nEnter the base of the triangle: ");
    scanf("%f", &tri_1.base);

    printf("\nEnter the height of the triangle: ");
    scanf("%f", &tri_1.height);

    // Conversion
    tri_1.area = 1.0 / 2 * tri_1.base * tri_1.height;

    // Output
    printf("\n\tArea: %.2f\n", tri_1.area);

    return 0;
}
