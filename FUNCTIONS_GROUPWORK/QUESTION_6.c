#include <stdio.h>

float calc_vol(float height, float length, float breadth);

void main()
{
    float height, length, breadth;

    printf("\nEnter the height: ");
    scanf("%f", &height);
    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the breadth: ");
    scanf("%f", &breadth);

    printf("\n\tYour cube of height %.2f, length %.2f and breath of %.2f", height, length, breadth);
    printf("\n\thas a volume of %.2f\n\n", calc_vol(height, length, breadth));
}

float calc_vol(float height, float length, float breadth)
{
    float volume;
    volume = height * length * breadth;
    return volume;
}
