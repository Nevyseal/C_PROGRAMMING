#include<stdio.h>
#include<stdlib.h>
int fact (int k);
void main( ) 
{
	int n;

start:
	printf ("Enter a positive integer to find factorial: ");
	scanf ("%d", &n);

	if (n < 0)
	{
		system("cls");
		printf ("\nNo factorial for negative numbers.\n\n");
		goto start;
	}
	printf ("\nThe factorial of %d is %d\n\n", n, fact(n));
}
int fact (int k)
{
	int i, f = 1;
	for (i = 1; i <= k; i++)
		f = f * i;
	return (f);
}
