#include<stdio.h>
void main( )
{
	int k, g, *ptr;

	k = 5;
	ptr = &k;
	g = *ptr; //Equivalent to g = k

	printf("The value of g is %d\n\n",g);
}
