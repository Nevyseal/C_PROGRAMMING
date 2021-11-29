#include<stdio.h>
int main()
{
	int k;

	k = 100;

	do
	{
		printf("\nk = %d",k);
		k = k + 1;
	}while(k <= 20);

	printf("\n\nGoodbye.\n\n");
	return 0;
}
