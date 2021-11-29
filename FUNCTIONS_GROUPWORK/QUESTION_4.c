#include <stdio.h>

int even(int integer);

void main()
{
    int number;

    printf("\nEnter a number: ");
    scanf("%d", &number);

    printf("\n\t%d\n\n", even(number));
}

int even(int integer)
{
    int remainder;
    remainder = integer % 2;

    if (remainder == 0)
        return 1;
    else
        return 0;
}
