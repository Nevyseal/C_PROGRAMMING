#include <stdio.h>

void main()
{
    int number;
    float test, squareroot;

    printf("Enter the number: ");
    scanf("%d", &number);

    squareroot = number / 2;
    test = 0;

    // Iterate until square root is different of test, that is updated on the loop
    while (squareroot != test)
    {
        test = squareroot;
        squareroot = (number / test + test) / 2;
    }

    printf("\nThe square root of %d is %f", number, squareroot);
}
