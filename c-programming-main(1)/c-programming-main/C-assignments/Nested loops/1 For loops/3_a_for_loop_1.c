#include <stdio.h>

void main()
{
    int yAxis, xAxis;

    printf("\n\n");

    for (yAxis = 2; yAxis <= 6; yAxis++)
    {
        for (xAxis = 0; xAxis < yAxis - 1; xAxis++)
        {
            printf("%3d", yAxis + xAxis);
        }

        printf("\n");
    }

    printf("\n\n");
}
