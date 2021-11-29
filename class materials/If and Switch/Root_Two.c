#include<stdio.h>
#include<math.h>
void main( )
{
	float a,a1,b;

	printf ("Enter the number: ");
	scanf ("%f",&a);

	if (a >= 0)
	{
		b = sqrt(a);
		printf ("\nThe square root of the %.2f is %.2f", a, b);
	}
	else
	{
		a1 = - a;
		b = sqrt(a1);
		printf ("\nThe square root of %.2f is %.2fi", a, b);
	}

	printf("\n\n");
}
