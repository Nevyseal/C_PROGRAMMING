#include <stdio.h>

void main()
{
    float pi=3.142;

    // Get radius
    int radius;
    printf("\nEnter the radius of the circle: ");
    scanf("%d",&radius);

    // Calculate the area pi*r^2
    float area = pi * radius * radius;

    // Calculate circumference
    float circumference = pi * (radius * 2);

    // Output
    printf("\n\tArea: %.2f \n\t Circumference: %.2f\n",area,circumference);

}
