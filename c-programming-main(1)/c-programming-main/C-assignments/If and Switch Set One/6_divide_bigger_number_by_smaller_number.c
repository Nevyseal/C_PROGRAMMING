#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstNumber, secondNumber;

    printf("\nEnter the first number: ");
    scanf("%d", &firstNumber);

    printf("\nEnter the second number: ");
    scanf("%d", &secondNumber);

    float result;
    if (firstNumber > secondNumber)
    {
        if (secondNumber == 0)
        {
            printf("\nSorry, you cannot divide a number by zero");
        }
        result = firstNumber / secondNumber;
        printf("The result is %.2f", result);
    }
    else if (secondNumber > firstNumber)
    {
        if (firstNumber == 0)
        {
            printf("\nSorry, you cannot divide a number by zero");
        }
        result = (float)secondNumber / firstNumber;
        printf("The result is %.2f", result);
    }

    return 0;
}
