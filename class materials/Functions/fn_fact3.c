#include<stdio.h>
#include<conio.h>
double fact (int h);
void main( )
{
	int a,b,c;
	printf("\nEnter the first number: ");
	scanf ("%d", &a);
	printf("\nEnter the second number: ");
	scanf("%d", &b);
	printf ("\nEnter the third number: ");
	scanf("%d",&c);
	printf("\nThe factorial of %d is %.3e", a, fact(a));
	printf("\nThe factorial of %d is %.3e", b, fact(b));
	printf("\nThe factorial of %d is %.3e\n\n", c, fact(c));
}
double fact(int h)
{
	int i;
	double g =1;
	for (i = 1; i <= h; i++)
		g = g * i;
	return(g);
}
