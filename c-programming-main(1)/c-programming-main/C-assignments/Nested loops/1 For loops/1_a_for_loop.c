#include <stdio.h>

void main()
{
    int yAxis, xAxis;

    printf("\n\n");

    for (yAxis = 1; yAxis <= 5; yAxis++)
    {
        for (xAxis = 1; xAxis <= yAxis; xAxis++)
        {
            printf("%3d", xAxis);
        }

        printf("\n");
    }

    printf("\n\n");
}