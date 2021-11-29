#include<stdio.h>
#include<conio.h>
void main()
{
	int i, vowel_count = 0;
	char word[30];

	printf("\nPlease enter a word: ");
	scanf("%s",word);

	i = 0;
	while(i < 30 && word[i] != '\0')
	{
		switch (word[i])
		{
		case 'a' : case 'A':
		case 'e' : case 'E':
		case 'i' : case 'I':
		case 'o' : case 'O':
		case 'u' : case 'U':
				 vowel_count++;
				break;
		}
		i++;
	}
	printf("\nThe number of vowels in %s is %d\n\n", word, vowel_count);
}
