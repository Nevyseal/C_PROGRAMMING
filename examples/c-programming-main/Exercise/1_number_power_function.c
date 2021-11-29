#include <stdio.h>
#include <string.h>

int powerFunction(int x, int n)
{
    // Variable used in loop counter
    int count;

    int number = 1;

    for (count = 0; count < n; count++)
    {
        number *= x;
    }

    return number;
}

int main()
{
    int number;
    int exponent;
    int answer;

    printf("\nEnter a number: ");
    scanf("%d", &number);

    printf("\nEnter a power: ");
    scanf("%d", &exponent);

    answer = powerFunction(number, exponent);

    printf("\n\t%d To the %d is %d\n\n", number, exponent, answer);

    return 0;
}
