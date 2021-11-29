#include <stdio.h>

void main()
{
    int number1, number2, number3;

    // Input
    printf("\nInput first number: ");
    scanf("%d", &number1);

    printf("\nInput second number: ");
    scanf("%d", &number2);

    printf("\nInput third number: ");
    scanf("%d", &number3);

    // Computation
    int sum = number1 + number2 + number3;
    int product = number1 * number2 * number3;
    float average = sum / 3.0;

    // Output
    printf("\n\tSum = %d", sum);
    printf("\n\tProduct = %d", product);
    printf("\n\tAveerage = %.2f\n", average);
}
