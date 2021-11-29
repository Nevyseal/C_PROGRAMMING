#include<stdio.h>
float rect_area(float width, float length); //function prototype
int my_number;

void main( )
{
	float ar, wid, leng;
    my_number = 5;

	printf("Enter the width and length of the rectangle: ");
	scanf("%f  %f",&wid,&leng);

	ar = rect_area(wid,leng); //function call (R.H.S) //actual parameters

	printf("\nThe area of the rectangle is %.2f\n\n",ar);
}
float rect_area(float width, float length) //function header/heading //formal parameters
{
	float area;
	my_number = my_number * 3;
	printf("\nThe value is %d\n",my_number);
	area = width * length;
	return (area);
}
