/*This program computes the sum
of all even numbers between 1 and 100*/
#include<stdio.h>
int main()
{
	int h, sum_even = 0;

	h = 1;

	while(h <= 100)
	{
		if(h % 2 == 0)
			sum_even = sum_even + h;
		h = h + 1;
	}

	printf("The sum of all even numbers between 1 and 100 is %d\n\n",sum_even);
	return 0;
}
