#include<stdio.h>
int main()
{
	int a, b, total;

	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);

	total = a + b;

	printf("\nThe sum is %d\n\n",total);
	return 0;
}