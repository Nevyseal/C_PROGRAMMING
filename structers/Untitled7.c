#include<stdio.h>
struct Rectangle
{
    float length,width,perimeter,area;



};
void main()
{
    struct Rectangle rectangle;

    printf("Enter The width :\n");
    scanf("%f",&rectangle.width);
    printf("Enter The length :\n");
    scanf("%f",&rectangle.length);


    rectangle.area = rectangle.length * rectangle.width;
    rectangle.perimeter = 2 *(rectangle.length + rectangle.width);

    printf("The Area of Rectangle is %f\n\n",rectangle.area);
    printf("The Perimeter of the rectangle is %f\n\n",rectangle.perimeter);


}
