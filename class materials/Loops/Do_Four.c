#include<stdio.h>
int main()
{
	int k;

	k = 600;

	do
	{
		printf("\nk = %d",k);
		k = k / 2;//updation
	}while(k >= 10); //Condition

	printf("\n\n");
	return 0;
}