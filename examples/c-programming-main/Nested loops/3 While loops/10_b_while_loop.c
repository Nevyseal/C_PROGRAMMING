#include <stdio.h>

void main()
{
    int xAxis, yAxis = 0;
    int product;

    printf("\n\n");

    while (yAxis <= 50)
    {
        xAxis = 0;
        while (xAxis <= 7)
        {
            if (yAxis == 0 && xAxis == 0)
            {
                printf("   *");
            }
            else if (yAxis == 0)
            {
                printf("%4d", xAxis);
            }
            else if (xAxis == 0)
            {
                printf("%4d", yAxis);
            }
            else
            {
                product = xAxis * yAxis;
                printf("%4d", product);
            }
            xAxis++;
        }

        yAxis += 10;
        printf("\n");
    }
    printf("\n\n");
}