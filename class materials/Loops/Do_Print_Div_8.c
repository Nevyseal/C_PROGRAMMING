//Program that displays all numbers that are divisible by 8
#include<stdio.h>
int main()
{
	int k;

	k = 1;

	printf("The numbers divisible by 8 between 1 and 200 are:\n\n");
	do

	{
		if( k % 8 == 0)
			printf("%d ",k);
		k = k + 1;
	}
	while(k <= 200);

	printf("\n\n");
	return 0;
}