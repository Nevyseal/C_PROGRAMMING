#include<stdio.h>
void main()
{
	float a, b, c, result;

	printf("Enter three numbers: ");
	scanf("%f %f %f",&a,&b,&c);

	result = c != 0 ? (a * b)/ c : a + b;

	printf("\nThe answer is %.2f\n\n",result);
}