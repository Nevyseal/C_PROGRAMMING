#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 22.0 / 7

void area_perimeter_of_rectangle(float len, float wid);
void area_circumference_of_circle(float rad);
void area_perimeter_of_triangle(float bas, float heig);

void main()
{
    //display the table
    printf("\n\t****The shapes you can calculate area and perimeter****\n\n");
    printf("\t1) Rectangle\n");
    printf("\t2) Circle\n");
    printf("\t3) Right Angled Trinagle\n");

    //The choice of the shape
    int choice;
    float area;
    int perimeter;

    printf("\n\tPlease choose a figure from the options given: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        // Rectangle
        float length, width;

        printf("\n\tEnter the length of your rectangle: ");
        scanf("%f", &length);
        printf("\n\tEnter the width of your rectangle: ");
        scanf("%f", &width);

        area_perimeter_of_rectangle(length, width);
    }
    else if (choice == 2)
    {
        // Circle
        float radius;

        printf("\n\tEnter the radius of your circle: ");
        scanf("%f", &radius);

        area_circumference_of_circle(radius);
    }
    else if (choice == 3)
    {
        // Right angled triangle
        float base, height;
        float hypotenus;

        printf("\n\tEnter the base of the triangle: ");
        scanf("%f", &base);

        printf("\n\tEnter the height of the triangle: ");
        scanf("%f", &height);

        area_perimeter_of_triangle(base, height);
    }
    else
    {
        printf("\n\tInvalid choice!\n");
    }
}

void area_perimeter_of_rectangle(float len, float wid)
{
    float area = len * wid;
    float perimeter = (len + wid) * 2;
    printf("\n\tFigure: Rectangle\n");
    printf("\tLength: %.1f Width: %.1f | Area: %.2f Perimeter: %.2f \n\n", len, wid, area, perimeter);
}

void area_circumference_of_circle(float rad)
{
    float area = PI * rad * rad;
    float circumference = PI * (rad * 2);

    printf("\n\tFigure: Circle\n");
    printf("\tRadius: %.1f | Area: %.2f circumference:%.2f \n", rad, area, circumference);
}
void area_perimeter_of_triangle(float bas, float heig)
{
    float area = 1.0 / 2 * bas * heig;
    float hypotenus = sqrt((bas * bas) + (heig * heig));
    float perimeter = bas + heig + hypotenus;
    printf("\n\tFigure: Right Angled Triangle\n");
    printf("\tbase: %.1f fheight: %.1f Area: %.2f Perimeter: %.2f\n\n", bas, heig, area, perimeter);
}