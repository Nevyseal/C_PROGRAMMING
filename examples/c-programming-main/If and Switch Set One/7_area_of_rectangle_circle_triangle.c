#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //display the table
    printf("\n\t****The shapes you can calculate area and perimeter****\n\n");
    printf("\t1) Rectangle\n");
    printf("\t2) Circle\n");
    printf("\t3) Right Angled Trinagle\n");

    //The choice of the shape
    int choice;
    printf("\n\tPlease choose a figure from the options given: ");
    scanf("%d", &choice);

    //Logic
    float area;
    int perimeter;

    if (choice == 1)
    { // Rectangle
        int length;
        int width;
        printf("\n\tArea of Rectangle is Length * Width, and it's perimeter is (Length+Width)*2\n");

        printf("\n\tEnter the length of your rectangle: ");
        scanf("%d", &length);
        printf("\n\tEnter the width of your rectangle: ");
        scanf("%d", &width);

        area = length * width;
        perimeter = (length + width) * 2;

        printf("\n\tFigure: Rectangle | Length:%d Width:%d | Area:%.2f Perimeter:%d \n", length, width, area, perimeter);
    }
    else if (choice == 2)
    { // Circle

        const float PI = 22.0 / 7;
        int radius;
        printf("\n\tArea of circle is PI*radius*radius(PI.r^2), and it's perimeter is PI*(radius*2) PI.d\n");

        printf("\n\tEnter the radius of your circle: ");
        scanf("%d", &radius);

        area = PI * radius * radius;
        perimeter = PI * (radius * 2);

        printf("\n\tFigure: Circle | Radius:%d | Area:%.2f Perimeter:%d \n", radius, area, perimeter);
    }
    else if (choice == 3)
    { // Right angled triangle
        int base;
        int height;
        float hypotenus;

        printf("\n\tArea of right angled triangle is (1/2)*base*height, and it's perimeter is base+height+hypotenus\n");

        printf("\n\tEnter the base of the triangle: ");
        scanf("%d", &base);

        printf("\n\tEnter the height of the triangle: ");
        scanf("%d", &height);

        area = 1.0 / 2 * base * height;
        hypotenus = sqrt((base * base) + (height * height));
        perimeter = base + height + hypotenus;
        printf("\n\tFigure: Right Angled Triangle | base:%d height:%d hypotenus:%.2f | Area:%.2f Perimeter:%d \n", base, height, hypotenus, area, perimeter);
    }
    else
    {
        printf("\n\tInvalid choice!\n");
    }

    return 0;
}
