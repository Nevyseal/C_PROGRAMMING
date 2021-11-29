#include <stdio.h>

void main()
{
    int length, width;

    // Input
    printf("\nEnter the length of the rectangle: ");
    scanf("%d", &length);

    printf("\nEnter the width of the rectangle: ");
    scanf("%d", &width);

    // Conversion
    int area = length * width;
    int perimeter = (length * 2) + (width * 2);

    // Output
    printf("\n\tArea: %d \n\t Perimeter: %d\n", area, perimeter);
}
