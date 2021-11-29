#include<stdio.h>
int main()
{
	int number;

	printf("Enter a number: ");
	scanf("%d",&number);

	printf("\nThe number you entered was %x\n\n",number);
	return 0;
}