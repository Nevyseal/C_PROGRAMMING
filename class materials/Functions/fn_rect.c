#include<stdio.h>
float rect_area(float width, float length); //function prototype
void main( )
{
	float ar, wid, leng;

	printf("Enter the width and length of the rectangle: ");
	scanf("%f  %f",&wid,&leng);

	ar = rect_area(wid,leng); //function call (R.H.S)

	printf("\nThe area of the rectangle is %.2f\n\n",ar);
}
float rect_area(float width, float length) //function header/heading //formal parameters
{
	float area;
	area = width * length;
	return (area);
	printf("\nGod bless Justine\n");
}
