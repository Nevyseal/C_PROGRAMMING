#include <stdio.h>
struct rectangle
{
    float length, width, area, perimeter;
};

void main()
{
    struct rectangle rect_1;

    // Input
    printf("\nEnter the length of the rectangle: ");
    scanf("%f", &rect_1.length);

    printf("\nEnter the width of the rectangle: ");
    scanf("%f", &rect_1.width);

    // Conversion
    rect_1.area = rect_1.length * rect_1.width;
    rect_1.perimeter = (rect_1.length * 2) + (rect_1.width * 2);

    // Output
    printf("\n\tArea: %.2f \n\t Perimeter: %.2f\n", rect_1.area, rect_1.perimeter);
}
