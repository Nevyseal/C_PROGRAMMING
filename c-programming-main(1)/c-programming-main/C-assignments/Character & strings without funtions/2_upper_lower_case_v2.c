#include <stdio.h>

void main()
{
    char character;

    // input
    printf("\n\nEnter a character: ");
    scanf("%c", &character);

    // comparison
    if (character >= 'A' && character <= 'Z')
    {
        printf("\n\t%c is in upper case.", character);
    }
    else if (character >= 'a' && character <= 'z')
    {
        printf("\n\t%c is in lower case.", character);
    }
    else
    {
        printf("\n\t%c is not a letter.", character);
    }

    printf("\n\n");
}
