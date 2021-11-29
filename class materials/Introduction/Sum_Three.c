#include<stdio.h>
int main()
{
	float a, b, total;

	printf("Enter two numbers: ");
	scanf("%f %f",&a,&b);

	total = a + b;

	printf("\nThe sum of %.2f and %.2f is %.2f\n\n",a,b,total);
	return 0;
}