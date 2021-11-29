#include <stdio.h>

void main()
{
    int number;
    float test, squaroot;

    printf("Enter the number: ");
    scanf("%d", &number);

    squaroot = number / 2;
    test = 0;

    // Iterate until squaroot is different of test, that is updated on the loop
    while (squaroot != test)
    {
        test = squaroot;
        squaroot = (number / test + test) / 2;
    }

    printf("\nThe square root of '%d' is '%.f'", number, squaroot);
}