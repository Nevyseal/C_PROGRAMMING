#include<stdio.h>
#include<ctype.h>
void main( )
{
	char grade;

	printf("Enter the grade the student got: ");
	scanf("%c",&grade);

	switch(toupper(grade))
	{
	case 'A': printf("\nThe student has a Distinction.");
		  break;
	case 'B': printf("\nThe student has a Credit.");
		  break;

	case 'C':

	case 'D': printf("\nThe student has a pass.");
		  break;
	case 'E':printf("\nThe student has a fail.");
	      break;

	default:printf("\n%c is an invalid grade",grade);
	}
	printf("\n\n");
}
