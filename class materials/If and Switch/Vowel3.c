#include<stdio.h>
#include<ctype.h>
void main( )
{
	char lett;
	
	printf("Enter a character: ");
	scanf ("%c", &lett);

	switch (tolower(lett))
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u': printf ("\n%c is a vowel",lett);
		 break;
	default: printf ("\n%c is not a vowel",lett);
	}
	printf("\n\n");
}
