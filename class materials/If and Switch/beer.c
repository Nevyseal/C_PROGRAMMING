#include<stdio.h>
#include<stdlib.h>
void main( )
{
	int choice, bottles;
	
	printf ("\n***Omare and Sons Bar***\n\n");
	printf ("Beer Brand 		Price\n");
	printf ("1. Pilsner		110\n");
	printf ("2. Tusker		100\n");
	printf ("3. Smirnoff Ice	        120\n");
	printf ("4. Kumi kumi		 10\n");

	printf ("\nEnter your option: ");
	scanf ("%d", &choice);

	switch (choice)
	{
	case 1:  printf ("\nHow many bottles do you want? ");
		scanf ("%d", &bottles);
		system("cls");
		printf("\nThe cost of %d bottles of pilsner is Kshs. %d", bottles, bottles *110);
		break;
	case 2:  printf ("\nHow many bottles do you want? ");
		scanf ("%d", &bottles);
		system("cls");
		printf("\nThe cost of %d bottles of Tusker is Kshs. %d", bottles, bottles *100);
		break;
	case 3:  printf ("\nHow many bottles do you want? ");
		scanf ("%d", &bottles);
		system("cls");
		printf("\nThe cost of %d bottles of Smirnoff Ice is Kshs. %d", bottles, bottles *120);
		break;
	case 4:  printf ("\nHow many glasses do you want? ");
		scanf ("%d", &bottles);
		system("cls");
		printf("\nThe cost of %d glasses of kumi-kumi is Kshs. %d", bottles, bottles *10);
		break;
	default: system("cls");
		printf("You can only enter options 1, 2, 3 or 4 only");
	}
	printf("\n\n");
}
