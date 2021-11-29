#include<stdio.h>
void my_function(int *x,int *y);
void main( )
{
	int a, b;

	printf("Enter two numbers: ");
	scanf("%d  %d",&a,&b);

	printf("\nBefore function call:");
	printf("\na = %d\nb = %d",a,b);

	my_function(&a,&b);

	printf("\n\nAfter function call:");
	printf("\na = %d\nb = %d\n\n",a,b);
}
void my_function(int *x,int *y)
{
	*x = *x * 10;
	*y = *y * 20;
	printf("\n\nInside the function");
	printf("\nx = %d\ny = %d",*x,*y);
}
