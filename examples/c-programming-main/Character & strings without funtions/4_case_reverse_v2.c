#include <stdio.h>
#include <ctype.h>

void main()
{
    char character, converted;

    // input
    printf("\nEnter a character: ");
    scanf("%c", &character);

    // conversion
    if (character >= 'A' && character <= 'Z')
    {
        converted = character + 32;
        printf("\n\t%c in lower case is %c", character, converted);
    }
    else if (character >= 'a' && character <= 'z')
    {
        converted = character - 32;
        printf("\n\t%c in upper case is %c", character, converted);
    }
    else
    {
        printf("\n\tINVALID INPUT TRY AGAIN");
    }

    printf("\n\n");
}

