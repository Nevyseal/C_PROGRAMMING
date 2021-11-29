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

    printf("\n\tThe proper way to write the name is ");

    // computation
    for (count = 0; count <= strlen(character); count++)
    {
        character[count] = tolower(character[count]);

        // checking of characters
        if (count == 0)
        {
            character[count] = toupper(character[count]);
        }

        if (character[count] == ' ')
        {
            printf(" ");
            count += 1;
            character[count] = toupper(character[count]);
        }

        // output

        printf("%c", character[count]);
    }

    printf("\n\n");
}
