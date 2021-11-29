#include <stdio.h>

void main()
{
    int xAxis, yAxis;
    int number, count = 1;

    printf("\n\n");

    for (yAxis = 1; yAxis <= 5; yAxis++)
    {
        for (xAxis = 1; xAxis <= 5; xAxis++)
        {
            number = xAxis + count;
            printf("  %d",number);
        }

        count++;
        printf("\n");
    }

    printf("\n\n");
}
