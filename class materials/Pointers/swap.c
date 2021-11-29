#include<stdio.h>
void swap(int *x,int *y);
void main( )
{
	int a, b;

	printf("Enter two numbers -> ");
	scanf("%d  %d",&a,&b);

	printf("\nBefore function call:");
	printf("\na = %d\nb = %d",a,b);

	swap(&a,&b);

	printf("\n\nAfter function call:");
	printf("\na = %d\nb = %d\n\n",a,b);
}
void swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
