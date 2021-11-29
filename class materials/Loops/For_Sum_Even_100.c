#include<stdio.h>
void main()
{
	int i, sum = 0;
	for(i = 1;i <= 100;i++)
	{
		if(i % 2 == 0)
			sum = sum + i;
	}

	printf("The sum of all numbers between 1 and 100 is %d\n\n",sum);
}
