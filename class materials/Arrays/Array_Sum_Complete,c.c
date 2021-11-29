#include<stdio.h>


void main( )
{
	int i, mark[10];
	float sum = 0, avg;

	for (i = 0; i < 10; i++)
	{
		printf("Enter element %d: ", i + 1);
		scanf("%d",&mark[i]);
		sum = sum + mark[i];
	}

	avg = sum / 10;

	printf("\n\nThe elements are: \n");
	for (i = 0; i < 10; i++)
		printf("%d ",mark[i]);

    printf("\n\nTheir sum is %.2f and their average is %.2f\n\n",sum, avg);
}
