#include<stdio.h>
void main( )
{
	int points;

	printf("Enter the points the student got: ");
	scanf("%d",&points);

	switch(points)
	{
	case 4: printf("\nThe student has a Distinction.");
		  break;
	case 3: printf("\nThe student has a Credit.");
		  break;
	case 2: printf("\nThe student has a Pass.");
		  break;
	case 1: printf("\nThe student has a Fail.");
		  break;
	default:   printf("\nThe points you entered are invalid.");
	}
	printf("\n\n");
}
