#include<stdio.h>
void greetings( );
void bye( );
void main( )
{
	printf("Call to the function greetings:\n");
	greetings( );
	printf("\nCall to the function bye:\n");
	bye( );
	printf("\n\n");
}
void greetings( )
{
	printf("How are you doing my friend?\n");
}
void bye( )
{
	printf("I have to go. Have a nice day.");
}
