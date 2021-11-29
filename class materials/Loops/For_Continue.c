#include<stdio.h>
void main()
{
	int i;
	for(i = 1;i <= 10;i++)
	{
		if(i == 6)
		{
			printf("\n\nThis is my favourite number.\n");
			continue;
		}
		printf("\ni = %d",i);
	}

	printf("\n\n");
}