#include<stdio.h>
float circle_area(float radius);
float circle_circumfrence(float radius);
int main()
{
    float area,circumfrence,radii;

    printf("Enter the radius of the circle :");
    scanf("%f",&radii);

    area = circle_area(radii);
    circumfrence = circle_circumfrence(radii);

    printf("\nThe area of the circle is %f",area);
    printf("\nThe circumfrence of the circle is %f",circumfrence);
}


float circle_area(float radius)
{
    float area;
    area = 22.0/7 * (radius*radius);
    return(area);

}

float circle_circumfrence(float radius)
{
    float circumfrence;
    circumfrence = 22.0/7 *(radius+radius);
    return(circumfrence);
}







