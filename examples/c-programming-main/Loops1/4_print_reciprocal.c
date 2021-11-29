#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, count = 1;
    char option;

    do
    {
        // reciprocal
        printf("\nEnter a number: ");
        scanf("%d", &num);

        printf("\n\tYour reciprocal is (1/%d)", num);

        // continuation
        printf("\n\nDo you want to continue (c/x): ");
        scanf("%s", &option);

        switch (option)
        {
        case 'x':
            printf("\n\n");
            exit(0);
            break;
        case 'c':
            count++;
            break;

        default:
            printf("\n\n\tINVALID INPUT TRY AGAIN!\n");
        }
    } while (count <= 99);
    return 0;
}
