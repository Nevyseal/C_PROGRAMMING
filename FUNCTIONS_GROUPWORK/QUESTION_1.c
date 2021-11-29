#include <stdio.h>
#define PI 22.0 / 7

float area_circle(float radius);
float circumference_circle(float radius);

void main()
{
    float radius_circle;

    printf("\nEnter radius of circle: ");
    scanf("%f", &radius_circle);

    printf("\n\tThe area is %.2f", area_circle(radius_circle));
    printf("\n\tThe circumference is %.2f\n\n", circumference_circle(radius_circle));
}

float area_circle(float radius)
{
    float area = PI * radius * radius;
    return area;
}
float circumference_circle(float radius)
{
    float circumfrence;
    circumfrence = PI * radius * 2;
    return circumfrence;
}

