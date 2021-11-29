#include<stdio.h>
#include<conio.h> 
void main( )
{
	float a, b, c;

	printf (" Enter three numbers: ");
	scanf ("%f  %f  %f", &a, &b, &c);

	if (a > b && a > c)
		printf ("\nThe largest number is %f", a);
	else if (b > a && b > c) 
		printf ("\nThe largest number is %f", b);
	else
		printf ("\nThe largest number is %f", c);

	printf("\n\n");
}
