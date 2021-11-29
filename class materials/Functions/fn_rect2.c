#include<stdio.h>
float rect_area(float width, float length); //function prototype
float rect_perimeter(float width, float length);
void main( )
{
	float ar, wid, leng,perimeter;

	printf("Enter the width and length of the rectangle: ");
	scanf("%f  %f",&wid,&leng);

	ar = rect_area(wid,leng); //function call (R.H.S)
	perimeter = rect_perimeter(wid,leng);

	printf("\nThe area of the rectangle is %.2f\n\n",ar);
	printf("\nThe perimeter of the rectangle is %.2f\n\n",perimeter);
}
float rect_area(float width, float length) //function header/heading //formal parameters
{
	float area;
	area = width * length;
	return (area);
}
float rect_perimeter(float width, float length) //function header/heading //formal parameters
{
	float perimeter;
	perimeter = 2*(width + length);
	return (perimeter);
}

