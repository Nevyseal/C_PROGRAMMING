#include <stdio.h>

void main()
{
    int yAxis, xAxis,count;

    printf("\n\n");

    for (yAxis = 1; yAxis <= 6; yAxis++)
    {
        count = 0;

        for (xAxis = 2; xAxis <= yAxis; xAxis++)
        {
            printf("%3d", yAxis + count);
             count++;

        }

        printf("\n");
    }

    printf("\n\n");
}
