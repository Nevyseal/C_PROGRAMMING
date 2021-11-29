#include<stdio.h>
#include<conio.h> 
void main( )
{
	float a, b, c, big;

	printf ("Enter three numbers: ");
	scanf ("%f  %f  %f", &a, &b, &c);

	if (a > b) 
		big = a;
	else
		big = b;

	if (c > big) 
		big = c;

	printf ("\nAmong %.f, %f and %f, the largest is %f\n\n", a, b, c, big);
}
