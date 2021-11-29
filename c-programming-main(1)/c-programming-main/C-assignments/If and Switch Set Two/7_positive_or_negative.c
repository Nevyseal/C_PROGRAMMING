#include <stdio.h>

void main()
{
    int number;

    // Input
    printf("\nEnter an Integer: ");
    scanf("%d", &number);

    // computation
    if (number < 0)
        printf("\n\t%d is a negative integer\n", number);

    else if (number == 0)
        printf("\n\t%d is zero\n", number);

    else if (number > 0)
        printf("\n\t%d is a positive integer\n", number);
}
