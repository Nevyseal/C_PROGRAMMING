#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float PI = 22 / 7.0;

    // Get radius
    float radius;
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area pi*r^2
    float area = PI * radius * radius;

    // Calculate circumference
    float circumference = PI * (radius * 2);

    // Output
    printf("\n\tArea: %.f \n\tCircumference: %.f\n", area, circumference);

    return 0;
}
