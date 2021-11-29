/*This program computes the sum
of all even numbers and the product of all 
odd numbers between 1 and 100*/
#include<stdio.h>
int main()
{
	int h, sum_even = 0;
	double prod_odd = 1;

	h = 1;

	do
	{
		if(h % 2 == 0)
			sum_even = sum_even + h;
		else
			prod_odd = prod_odd * h;
		h = h + 1;
	}while(h <= 100);

	printf("The sum of all even numbers between 1 and 100 is %d\n",sum_even);
	printf("The product of all odd numbers between 1 and 100 is %.2e\n\n",prod_odd);
	return 0;
}