#include <stdio.h>
#include <ctype.h>

void main()
{
    char character;

    // input
    printf("\n\nEnter a character: ");
    scanf("%c", &character);

    // comparison
    if (isalpha(character) && isupper(character))
    {
        printf("\n\t%c is in upper case.", character);
    }
    else if (isalpha(character) && islower(character))
    {
        printf("\n\t%c is in lower case.", character);
    }
    else
    {
        printf("\n\t%c is not a letter.", character);
    }

    printf("\n\n");
}
