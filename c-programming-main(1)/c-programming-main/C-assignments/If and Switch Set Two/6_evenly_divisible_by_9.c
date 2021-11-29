#include <stdio.h>

void main()
{
    int number, rem2, rem9;

    // Input
    printf("\nInput an number: ");
    scanf("%d", &number);

    // Remainder
    rem9 = number % 9;

    // computation
    switch (rem9)
    {
    case '0':
        rem2 = number % 2;

        if (rem2 == 0)
            printf("\n\tNumber is evenly divisible by 9\n");

        else
            printf("\n\tNumber is divisible by 9 but is an odd number\n");

        break;
    default:
        printf("\n\tNumber is not divisible by 9\n");
    }
}
