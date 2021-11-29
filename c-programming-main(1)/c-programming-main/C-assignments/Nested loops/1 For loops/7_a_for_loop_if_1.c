#include <stdio.h>

void main()
{
    int xAxis, yAxis;
    int space;

    printf("\n\n");

    for (yAxis = 1; yAxis <= 6; yAxis++)
    {
        for (xAxis = 1; xAxis <= 6; xAxis++)
        {
            if (yAxis == 1 || yAxis == 6)
            {
                printf(" * ");
            }
            else if ((yAxis == 2) && (xAxis == 5))
            {
                printf(" * ");
            }
            else if ((yAxis == 3) && (xAxis == 4))
            {
                printf(" * ");
            }
            else if ((yAxis == 4) && (xAxis == 3))
            {
                printf(" * ");
            }
            else if ((yAxis == 5) && (xAxis == 2))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\n\n");
}