#include<stdio.h>
#include<conio.h>
void main( )
{
	float mark1, mark2, mark3, avg;

	printf ("Enter marks in three subjects: ");
	scanf ("%f  %f  %f", &mark1, &mark2, &mark3);

	avg = (mark1 + mark2 + mark3) / 3.0;

	printf ("\nThe average mark is %.2f", avg);

	if ((avg >= 75) && (avg <= 100))
		printf("\nThe student got a Distinction.");
	else if ((avg >= 65) && (avg < 75))
		printf("\nThe student got a Credit.");
	else if ((avg >= 50) && (avg < 65))
		printf("\nThe student got a Pass.");
	else if ((avg >= 0) && (avg < 50))
		printf("\nThe student got a Fail.");


	printf ("\n\n");
	getch();
}
