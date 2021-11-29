#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    char character[1000];
    int digits, alphabet, special, spaces;
    int count;

    // assign all counters to zero
    digits = alphabet = special = spaces = 0;

    // input
    printf("\nEnter a sentence: ");
    fgets(character, sizeof(character), stdin);

    // Loop through the character
    for (count = 0; count <= strlen(character); count++)
    {
        // comparison
        if (isalpha(character[count]))
        {
            alphabet++;
        }
        else if (isdigit(character[count]))
        {
            digits++;
        }
        else if (isblank(character[count]))
        {
            spaces++;
        }
        else if (ispunct(character[count]))
        {
            special++;
        }
    }

    printf("\n\t%s \thas:-", character);
    printf("\n\t%d letters, %d digits, %d spaces and %d special characters.", alphabet, digits, spaces, special);
    printf("\n\n");
}
