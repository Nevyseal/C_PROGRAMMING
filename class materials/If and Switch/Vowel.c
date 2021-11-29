#include<stdio.h>
void main( )
{
	char c;
	 
	printf("Enter a character : ");
	scanf("%c", &c);

	if (c == 'a' || c == 'A')
		printf ("\nThe character is a vowel");
	else if (c == 'e' || c == 'E')
		printf ("\nThe character is a vowel");
	else if (c == 'i' || c =='I') 
		printf ("\nThe character is a vowel");
	else if (c == 'o' || c =='O')
		printf ("\nThe character is a vowel");
	else if (c == 'u' || c == 'U')
		printf ("\nThe character is  a vowel");
	else
		printf ("\nThe character is not a vowel");

	printf("\n\n");
}
