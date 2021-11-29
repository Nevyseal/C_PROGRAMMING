#include <stdio.h>

int even_odd(int integer);

void main()
{
    int number, i;
    int test_numbers[100];

    printf("\nEnter the number of tests: ");
    scanf("%d", &number);
    printf("\n\n");


    for (i = 0; i < number; i++)
    {
        printf("Enter a number %d: ", i + 1);
        scanf("%d", &test_numbers[i]);
    }


    for (i = 0; i < number; i++)
    {
        if (even_odd(test_numbers[i]) == 1)
            printf("\n\t%4d is an even number", test_numbers[i]);
        else
            printf("\n\t%4d is an odd number", test_numbers[i]);
    }
    printf("\n\n");
}

int even_odd(int integer)
{
    int remainder;
    remainder = integer % 2;

    if (remainder == 0)
        return 1;
    else
        return 0;
}
