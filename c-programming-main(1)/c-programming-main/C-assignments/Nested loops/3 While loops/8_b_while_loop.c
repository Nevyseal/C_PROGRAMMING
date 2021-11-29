#include <stdio.h>

void main()
{
    int xAxis, yAxis = 1;
    int space;

    printf("\n\n");

    while (yAxis <= 6)
    {
        xAxis = 1;
        while (xAxis <= 6)
        {
            if (yAxis == 1 || yAxis == 6)
            {
                printf(" & ");
            }
            else if (yAxis == xAxis)
            {
                printf(" & ");
            }
            else
            {
                printf(" * ");
            }
            xAxis++;
        }

        printf("\n");
        yAxis++;
    }

    printf("\n\n");
}