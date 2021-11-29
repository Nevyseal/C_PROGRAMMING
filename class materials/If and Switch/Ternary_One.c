#include<stdio.h>
void main()
{
	float a, b, smallest;

	printf("Enter two numbers: ");
	scanf("%f %f",&a,&b);

	smallest = a < b ? a : b;

	printf("\nBetween %.1f and %.1f, the smallest is %.1f\n\n",a, b, smallest);
}