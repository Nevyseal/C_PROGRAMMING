#include <stdio.h>

void main()
{
    int yAxis, xAxis;

    printf("\n\n");

    for (yAxis = 1; yAxis <= 6; yAxis++)
    {
        for (xAxis = 1; xAxis <= 6; xAxis++)
        {
            if (yAxis >= xAxis +1)
            {
                printf("   ");
            }
            else
                printf("%2d ", xAxis);
        }

        printf("\n");
    }

    printf("\n\n");
}
