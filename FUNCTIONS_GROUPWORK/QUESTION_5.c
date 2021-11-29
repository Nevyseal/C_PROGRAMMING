#include <stdio.h>

float get_big(float number1, float number2, float number3);

int main()
{
    float number1, number2, number3;
    printf("\nEnter three numbers: ");
    scanf("%f %f %f", &number1, &number2, &number3);

    printf("\n\tOut of your numbers %.2f, %.2f and %.2f", number1, number2, number3);
    printf("\n\t%.2f is the biggest\n\n", get_big(number1, number2, number3));

    return 0;
}

float get_big(float number1, float number2, float number3)
{
    float biggest;
    if (number1 > number2 && number1 > number3)
        biggest = number1;
    else if (number2 > number3)
        biggest = number2;
    else
        biggest = number3;

    return biggest;
}
