#include<stdio.h>
void main( )
{
	int arr[2][3] = {{10,20,30},{40,50,60}};
	int i, j, sum = 0;
	float avg;

	printf("The array elements are:\n");
	for(i = 0; i < 2; i++)
	{
		for( j = 0; j < 3; j++)
		{
			sum = sum + arr[i][j];
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}

	avg = sum/6.0;

	printf("\nTheir sum is %d and their average is %.2f\n\n",sum,avg);
}
