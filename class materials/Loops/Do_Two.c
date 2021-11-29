#include<stdio.h>
int main()
{
	int k;

	k = 5;

	do
	{
		printf("\nk = %d",k);
		k = k + 5;
	}while(k <= 300);

	printf("\n\n");
	return 0;
}