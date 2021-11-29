//Program to print all numbers
//divisible by 5 between 100 and 200
#include<stdio.h>
int main()
{
	int k;

	k = 100;

	printf("The numbers divisible by 5 between 100 and 200 are:\n\n");
	do
	{
		if(k % 5 == 0)
			printf("%d ",k);
		k = k + 1;
	}while(k <= 200);

	printf("\n\n");
	return 0;
}