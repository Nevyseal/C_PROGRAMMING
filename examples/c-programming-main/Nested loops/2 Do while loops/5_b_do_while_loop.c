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
            printf(" * ");
            xAxis++;

        } while (xAxis <= yAxis);

        printf("\n");
        yAxis++;

    } while (yAxis <= 6);

    printf("\n\n");
}