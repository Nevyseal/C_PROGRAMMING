#include<stdio.h>
#include<conio.h>
void main( )
{
	int i, mark[10];
	float sum = 0, avg;
	i=0;

	do
	{




		printf("Enter element %d: ", i + 1);
		scanf("%d",&mark[i]);
		sum = sum + mark[i];
		i++;
	}while(i < 10);

	avg = sum / 10;

	printf("\n\nThe elements are: \n");
	 i = 0;
do {


		printf("%d ",mark[i]);
		 i++;

}while(i < 10);

    printf("\n\nTheir sum is %.2f and their average is %.2f\n\n",sum, avg);
}
