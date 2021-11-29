#include<stdio.h>
void main( )
{
	int a, b, largest;

	printf ("Enter two integers: ");
	scanf("%d %d",&a, &b);

	if (!(a > b))
		largest = b;
	else
		largest = a;
		
	printf("\nBetween %d and %d, the largest is %d\n\n",a, b, largest);
}
