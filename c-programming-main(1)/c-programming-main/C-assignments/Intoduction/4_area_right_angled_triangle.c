#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, height;

    // Input
    printf("\nEnter the base of the triangle: ");
    scanf("%d", &base);

    printf("\nEnter the height of the triangle: ");
    scanf("%d", &height);

    // Conversion
    float area = 1.0 / 2 * base * height;

    // Output
    printf("\n\tArea: %.2f\n", area);

    return 0;
}
