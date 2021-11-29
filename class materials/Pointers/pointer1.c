#include<stdio.h>
void main( ) 
{
	int *a, b; //a is a pointer variable

	b = 5;
	a = &b;

	printf("\nThe value is %d\n\n",*a);
}
