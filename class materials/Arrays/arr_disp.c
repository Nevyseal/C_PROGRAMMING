#include<stdio.h>
#include<conio.h> 
void main( )
{
	int i, mark[10];

	for (i = 0; i < 10; i++)
	{
		printf("\nEnter element %d: ", i + 1);
		scanf("%d",&mark[i]);
	}
	printf("\n\nThe elements are: \n");
	for (i = 0; i < 10; i++)
		printf("%d ",mark[i]);

	printf("\n\n");
}
