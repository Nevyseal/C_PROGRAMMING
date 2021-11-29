#include<stdio.h>
#include<math.h>
void main( )
{
	float a,a1,b;

	printf ("Enter the number: ");
	scanf ("%f",&a);

	if (a >= 0)
	{
		b = pow (a,1.0/2.0);
		printf ("\nThe square root of the %.2f is %.2f", a, b);
	}
	else
	{
		a1 = - a;
		b = pow (a1,1.0/2.0);
		printf ("\nThe square root of %.2f is %.2fi", a, b);
	}

	printf("\n\n");
}
