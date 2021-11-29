#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, remainder;

    // Input
    printf("\nInput an integer: ");
    scanf("%d", &number);

    // computation
    remainder = number % 2;
    if (remainder == 0)
        printf("\n\tNumber is even\n");
    else
        printf("\n\tNumber is odd\n");

    return 0;
}
