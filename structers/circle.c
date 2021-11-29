#include<stdio.h>
struct circle
{
    float area,circumfrence,radius;
};
void main()
{
    struct circle circle1;
    printf("Enter The Radius Of the circle :");
    scanf("%f",&circle1.radius);

    circle1.area = 22.0/7 * circle1.radius * circle1.radius;
    circle1.circumfrence = 22.0/7 * (circle1.radius + circle1.radius);

    printf("\n\nThe Area of circle is %f\n\n",circle1.area);
    printf("\n\nThe perimeter of circle is %f\n\n",circle1.circumfrence);

}
