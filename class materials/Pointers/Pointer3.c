#include<stdio.h>
void main( )
{
	int a, *b;

	printf("Enter the value of a:> ");
	scanf("%d", &a);

	b = &a;
	printf("\nThe value entered is %d",*b);

	a++;
	printf("\nThe new value is %d",*b);

	a = a * 10;
	printf("\nThe newest value is %d\n\n",*b);
}
