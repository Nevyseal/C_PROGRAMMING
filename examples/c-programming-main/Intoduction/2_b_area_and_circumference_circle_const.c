#include <stdio.h>
#include <math.h>
#define PI 22/7.0

void main()
{
    // Get radius
    float radius;
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area pi*r^2
    float area = PI * pow(radius, 2);

    // Calculate circumference
    float circumference = PI*(radius*2);

    // Output
    printf("\n\tArea: %.1f \n\tCircumference: %.1f\n", round(area), round(circumference));

}

