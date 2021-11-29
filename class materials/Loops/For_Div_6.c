/*Program to print all numbers divisible by 6
between 400 and 600*/
#include<stdio.h>
void main()
{
	int h;

	printf("The numbers divisible by 6 between 400 and 600 are:\n\n");
	for(h = 400;h <= 600;h++)
	{
		if(h % 6 == 0)
			printf("%d ",h);
	}

	printf("\n\n");
}