/*This program computes the sum
of all odd numbers between 1 and 100*/
#include<stdio.h>
int main()
{
	int h, sum_odd = 0;

	h = 1;

	while(h <= 100)
	{
		if(h % 2 != 0)
			sum_odd = sum_odd + h;
		h = h + 1;
	}

	printf("The sum of all odd numbers between 1 and 100 is %d\n\n",sum_odd);
	return 0;
}
