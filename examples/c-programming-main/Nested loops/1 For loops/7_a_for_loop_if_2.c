#include <stdio.h>

void main()
{
    int yAxis, counter = 6, xAxis;

    printf("\n\n");

    for (yAxis = 0; yAxis < counter; yAxis++)
    {
        for (xAxis = 0; xAxis < counter; xAxis++)
        {
            if (yAxis == 0 || yAxis + xAxis == counter - 1 || yAxis == counter - 1)
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