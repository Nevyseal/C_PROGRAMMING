#include <stdio.h>

void main()
{
    int yAxis = 1, xAxis;
    int space;

    printf("\n\n");

    while (yAxis <= 7)
    {
        space = 1;
        while (space <= 7 - yAxis)
        {
            printf("   ");
            space++;
        }

        xAxis = 0;
        while (xAxis != 2 * yAxis - 1)
        {
            int remainder = xAxis % 2;

            if (remainder == 0)
            {
                printf("   ");
            }
            else
            {
                printf("*  ");
            }
            xAxis++;
        }

        yAxis++;
        printf("\n");
    }

    printf("\n\n");
}
