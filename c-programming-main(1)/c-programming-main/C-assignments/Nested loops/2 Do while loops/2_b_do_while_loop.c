#include <stdio.h>

void main()
{
    int yAxis = 1, xAxis;

    printf("\n\n");

    do
    {
        xAxis = 1;
        do
        {
            if (yAxis >= xAxis + 1)
            {
                printf("   ");
            }
            else
            {
                printf("%2d ", xAxis);
            }
            xAxis++;

        } while (xAxis <= 6);

        yAxis++;
        printf("\n");

    } while (yAxis <= 6);

    printf("\n\n");
}