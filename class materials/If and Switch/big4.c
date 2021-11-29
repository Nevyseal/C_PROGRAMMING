#include<stdio.h>
#include<conio.h> 
void main( )
{
	float a, b, c,big;

	printf (" Enter three numbers: ");
	scanf ("%f  %f  %f", &a, &b, &c);

	if (a > b && a > c)
		big = a;
	else if (b > a && b > c) 
		big = b;
	else
		big = c;

	printf ("\nAmong %f, %f and %f, the largest is %f\n\n", a, b, c, big);
}
