#include<stdio.h>
#include<conio.h>
void main( )
{
	int arr[2][3];
	int i, j;
	
	for(i = 0; i < 2; i++)
	{
		for( j = 0; j < 3; j++)
		{
			printf("Enter element (%d, %d): ",i + 1, j + 1);
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\n\nThe matrix you entered was:\n");
	for(i = 0; i < 2; i++)
	{
		for( j = 0; j < 3; j++)
			printf("%d  ",arr[i][j]);
		printf("\n");
	}
	printf("\n");
}
