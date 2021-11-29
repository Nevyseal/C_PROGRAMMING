#include <stdio.h>
#include <stdlib.h>
#define PI 22.0 / 7
struct circle
{
    float radius, area, circumference;
};

int main()
{
    struct circle circle_1;

    // Get radius
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &circle_1.radius);

    // Calculate the area pi*r^2
    circle_1.area = PI * circle_1.radius * circle_1.radius;

    // Calculate circumference
    circle_1.circumference = PI * (circle_1.radius * 2);

    // Output
    printf("\n\tArea: %.2f \n\tCircumference: %.2f\n", circle_1.area, circle_1.circumference);

    return 0;
}
