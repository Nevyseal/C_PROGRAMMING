#include <stdio.h>

void main()
{
    int yAxis, xAxis;
    int space, remainder;

    printf("\n\n");

    for (yAxis = 1; yAxis <= 7; yAxis++)
    {
        for (space = 1; space <= 7 - yAxis; space++)
        {
            printf("   ");
        }

        for (xAxis = 0; xAxis != 2 * yAxis - 1; xAxis++)
        {
            remainder = xAxis % 2;

            if (remainder == 0)
            {
                printf("   ");
            }
            else
            {
                printf("*  ");
            }
        }
        printf("\n");
    }

    printf("\n\n");
}