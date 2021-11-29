#include <stdio.h>

void main()
{
    int xAxis, yAxis = 1;

    printf("\n\n");

    do
    {
        xAxis = 1;
        do
        {
            printf("%2d ", xAxis);
            xAxis++;

        } while (xAxis <= yAxis);

        printf("\n");
        yAxis++;

    } while (yAxis <= 5);

    printf("\n\n");
}