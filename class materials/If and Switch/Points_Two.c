#include<stdio.h>
void main( )
{
	int points;

	printf("Enter the points the student got: ");
	scanf("%d",&points);

	switch(points)
	{
	case 4:
	case 3:
	case 2: printf("\nThe student Passed.");
		  break;
	case 1: printf("\nThe student Failed.");
		  break;
	default:   printf("\nThe points you entered are invalid.");
	}
	printf("\n\n");
}
