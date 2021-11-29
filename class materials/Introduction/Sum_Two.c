#include<stdio.h>
int main()
{
	float a, b, total;

	printf("Enter two numbers: ");
	scanf("%f %f",&a,&b);

	total = a + b;

	printf("\nThe sum is %.2f\n\n",total);
	return 0;
}