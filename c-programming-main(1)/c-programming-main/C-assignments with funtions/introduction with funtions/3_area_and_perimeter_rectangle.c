#include <stdio.h>
int area(int length, int width);
int perimeter(int length, int width);

void main()
{
    int length, width;

    // Input
    printf("\nEnter the length of the rectangle: ");
    scanf("%d", &length);

    printf("\nEnter the width of the rectangle: ");
    scanf("%d", &width);

    // Output
    printf("\n\tArea: %d \n\t Perimeter: %d\n", area(length, width), perimeter(length, width));
}
int area(int length, int width)
{
    return length * width;
}
int perimeter(int length, int width)
{
    return (length * 2) + (width * 2);
}