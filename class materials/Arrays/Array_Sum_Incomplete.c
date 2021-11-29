#include<stdio.h>
#include<conio.h>
void main( )
{
	int i, mark[10];
	float sum, avg;

	for (i = 0; i < 10; i++)
	{
		printf("Enter element %d: ", i + 1);
		scanf("%d",&mark[i]);
	}
	//The code below will be modified. Don't try this at home.
	sum = mark[0] + mark[1] + mark[2] + mark[3] + mark[4] + mark[5] + mark[6] + mark[7] + mark[8] + mark[9];
	avg = sum / 10;
	printf("\n\nThe elements are: \n");
	for (i = 0; i < 10; i++)
		printf("%d ",mark[i]);

    printf("\n\nTheir sum is %.2f and their average is %.2f\n\n",sum, avg);
}
