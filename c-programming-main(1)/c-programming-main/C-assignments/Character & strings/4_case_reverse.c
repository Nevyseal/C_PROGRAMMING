#include <stdio.h>
#include <ctype.h>

void main()
{
    char character, converted;

    // input
    printf("\nEnter a character: ");
    scanf("%c", &character);

    // conversion
    if (isupper(character))
    {
        converted = tolower(character);
        printf("\n\t%c in lower case is %c", character, converted);
    }
    else if (islower(character))
    {
        converted = toupper(character);
        printf("\n\t%c in upper case is %c", character, converted);
    }
    else
    {
        printf("\n\tINVALID INPUT TRY AGAIN");
    }

    printf("\n\n");
}

