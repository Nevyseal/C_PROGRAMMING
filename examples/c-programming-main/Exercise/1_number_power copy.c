#include <stdio.h>

int main()
{
    float number, power, answer = 1;

    printf("\nEnter a number: ");
    scanf("%f", &number); // 5
    printf("\nEnter a power: ");
    scanf("%f", &power); // 3

    for (int counter = 1; counter <= power; counter++) // counter = counter + 1
    {
        answer = answer * number;
    }

    printf("\n\t%.f To the %.f is %.f\n", number, power, answer);

    return 0;
}
