#include<stdio.h>
void main( )
{
	float marks;

	printf ("Enter marks the student scored: ");
	scanf ("%f", &marks);

	if (!(marks >= 0 && marks <= 100))
		printf("\n%.2f is an invalid mark.",marks);
	else
		printf("\n%.2f is a valid mark.",marks);

	printf ("\n\n");
}
