#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    char character[100], converted;
    int count;

    // input
    printf("\nEnter your sentence: ");
    fgets(character, sizeof(character), stdin);

    printf("\n\t");

    // computation
    for (count = 0; count <= strlen(character); count++)
    {

        // checking of characters
        if (isupper(character[count]))
        {
            character[count] = tolower(character[count]);
        }
        else if (islower(character[count]))
        {
            character[count] = toupper(character[count]);
        }

        // output
        printf("%c", character[count]);
    }

    printf("\n\n");
}
