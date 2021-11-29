#include<stdio.h>
#include<string.h>
void main()
{
	int i, vowel_count = 0, word_length;
	char word[30];

	printf("\nPlease enter a word: ");
	scanf("%s",word);

	word_length = strlen(word);
	for(i = 0; i < word_length;i++)
	{
		switch (tolower(word[i]))
		{
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
				 vowel_count++;
				break;
		}
	}
	printf("\nThe number of vowels in %s is %d\n\n", word, vowel_count);
}
