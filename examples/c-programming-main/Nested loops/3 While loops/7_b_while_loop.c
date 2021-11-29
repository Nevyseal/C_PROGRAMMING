#include <stdio.h>

void main()
{
    int xAxis, yAxis = 1;
    int space, counter = 5;

    printf("\n\n");

    while (yAxis <= 6)
    {
        xAxis = 6;
        while (xAxis >= 1)
        {
            if (yAxis == 1 || yAxis == 6)
            {
                printf(" * ");
            }
            else if (yAxis == xAxis)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
            xAxis--;
        }

        yAxis++;
        printf("\n");
    }

    printf("\n\n");
}