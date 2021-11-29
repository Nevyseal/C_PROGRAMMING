#include <stdio.h>
#include <stdlib.h>
int area(int base, int height);
int main()
{
    int base, height;

    // Input
    printf("\nEnter the base of the triangle: ");
    scanf("%d", &base);

    printf("\nEnter the height of the triangle: ");
    scanf("%d", &height);

    // Output
    printf("\n\tArea: %.2f\n", area(base, height));

    return 0;
}
int area(int base, int height)
{
    return 1.0 / 2 * base * height;
}
