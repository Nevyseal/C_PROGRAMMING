#include <stdio.h>

void main()
{
    char character[1000];
    int digits, alphabet, special, spaces;
    int count;

    // assign all counters to zero
    digits = alphabet = special = spaces = 0;

    // input
    printf("\nEnter a sentence: ");
    fgets(character, 1000, stdin);

    // Loop through the character
    for (count = 0; character[count] != 0; count++)
    {
        // comparison
        if (character[count] >= 'a' && character[count] <= 'z')
        {
            alphabet++;
        }
        else if (character[count] >= 'A' && character[count] <= 'Z')
        {
            alphabet++;
        }
        else if ((character[count] >= '0') && (character[count] <= '9'))
        {
            digits++;
        }
        else if (character[count] == ' ')
        {
            spaces++;
        }
        else
        {
            special++;
        }
    }

    printf("\n\t%s \thas:-", character);
    printf("\n\t%d letters, %d digits, %d spaces and %d special characters.", alphabet, digits, spaces, special - 1);
    printf("\n\n");
}
