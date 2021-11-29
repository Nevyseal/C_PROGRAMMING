#include <stdio.h>

void main()
{
    int yAxis, xAxis;
    int number;

    printf("\n\n");

    for (yAxis = 1; yAxis <= 6; yAxis++)
    {
        for (xAxis = 1; xAxis <= yAxis; xAxis++)
        {
            printf("   ");
        }
        for (number = yAxis; number <= 6; number++)
        {
            printf("%3d", number);
        }
        printf("\n");
    }

    printf("\n\n");
}