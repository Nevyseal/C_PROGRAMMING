#include<stdio.h>
void main( )
{
	int age;

	printf ("Enter your age: ");
	scanf("%d",&age);

	if (age >= 18)
	{
		printf("\nYou can vote.");
		printf("\nPlease vote wisely.");
	}
	else
		printf("\nYou are too young to vote.");
		printf("\nDon't worry, you will vote soon.");

	printf("\n\n");
}
