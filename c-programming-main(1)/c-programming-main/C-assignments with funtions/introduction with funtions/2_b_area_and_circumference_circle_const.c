#include <stdio.h>
#define PI 22 / 7.0
float area_circle(float radius);
float circumference_circle(float radius);

void main()
{
    // Get radius
    float radius;
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &radius);

    // Output
    printf("\n\tArea: %.1f \n\tCircumference: %.1f\n", area_circle(radius), circumference_circle(radius));
}
float area_circle(float radius)
{
    // Calculate the area pi*r^2
    return PI * radius * radius;
}
float circumference_circle(float radius)
{
    // Calculate circumference
    return 2 * PI * radius;
}
