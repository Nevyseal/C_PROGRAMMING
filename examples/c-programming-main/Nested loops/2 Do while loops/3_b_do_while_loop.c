#include <stdio.h>

void main()
{
    int yAxis, xAxis;

    printf("\n\n");

    yAxis = 2;
    do
    {
        xAxis = 0;
        do
        {
            printf("  %d", yAxis + xAxis);
            xAxis++;
        } while (xAxis < yAxis - 1);

        yAxis++;
        printf("\n");

    } while (yAxis <= 6);

    printf("\n\n");
}
