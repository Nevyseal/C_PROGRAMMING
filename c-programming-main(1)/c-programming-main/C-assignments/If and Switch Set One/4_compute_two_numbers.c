#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Prompt for number input
    float Number1, Number2;

    printf("\nPlease enter the first number: ");
    scanf("%f", &Number1);

    printf("\nPlease enter the second number: ");
    scanf("%f", &Number2);

    //Pass the numbers through some computed logic
    float result;
    if (Number1 > Number2)
    {
        result = Number1 - Number2;
        printf("\nThe result of computation is %.2f\n", result);
    }
    else if (Number2 > Number1)
    {
        result = (float)Number2 / Number1;
        printf("\nThe result of computation is %.2f\n", result);
    }
    else if (Number1 == Number2)
    {
        result = Number1 + Number2;
        printf("\nThe result of computation is %.2f\n", result);
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}
