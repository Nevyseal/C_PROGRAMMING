#include<stdio.h>
#include<conio.h> 
void fn();
void main( )
{
	fn ( );
}
void fn( )
{
	int x, k;
	printf ("Enter the value of x: ");
	scanf ("%d",&x);
	k = x * x + 2 * x + 5;
	printf("\nThe function value is %d\n\n", k);
}
