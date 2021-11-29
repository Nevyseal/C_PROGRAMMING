#include <stdio.h>

void main()
{
    int space;
    int yAxis, xAxis;

    printf("\n\n");

    for (yAxis = 1; yAxis <= 6; yAxis++)
    {
        for (space = 1; space <= 6 - yAxis; space++)
        {
            printf("   ");
        }

        for (xAxis = 1; xAxis <= yAxis; xAxis++)
        {
            printf("  *   ");
        }
        printf("\n");
    }
    printf("\n\n");
}