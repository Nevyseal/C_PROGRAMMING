#include <stdio.h>

void main()
{
    int i, number, squareroot;

    printf("\nEnter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        if (number == i * i)
        {
            printf("\nThe squareroot of %d is %d", number, i);
            goto ending;
        }
    }

    printf("\nThe squareroot of %d is not a whole number", number);
ending:
    printf("\n\n");
}
