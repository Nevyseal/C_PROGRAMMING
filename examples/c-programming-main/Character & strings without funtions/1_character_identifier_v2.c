#include <stdio.h>

int main()
{
    char character;

    // input
    printf("\n\nEnter a character: ");
    scanf("%c", &character);

    // comparison
    if (((character >= 'a') && (character <= 'z')) || ((character >= 'A') && (character <= 'Z')))
    {
        printf("\n\t%c is a letter.", character);
    }
    else if ((character >= '0') && (character <= '9'))
    {
        printf("\n\t%c is a number.", character);
    }
    else
    {
        printf("\n\t %c is a special character.", character);
    }

    printf("\n\n");

    return 0;
}
