#include <stdio.h>
#include <ctype.h>

int main()
{
    char character;

    // input
    printf("\n\nEnter a character: ");
    scanf("%c", &character);

    // comparison
    if (isalpha(character))
    {
        printf("\n\t%c is a letter.", character);
    }
    else if (isalnum(character))
    {
        printf("\n\t%c is a number.", character);
    }
    else
    {
        printf("\n\t%c is a special character.", character);
    }

    printf("\n\n");

    return 0;
}
