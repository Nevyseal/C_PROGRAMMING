#include <stdio.h>

void main()
{
    int xAxis, yAxis;
    int product;

    printf("\n\n");

    for (yAxis = 0; yAxis <= 50; yAxis += 10)
    {
        for (xAxis = 0; xAxis <= 7; xAxis++)
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
        }
        printf("\n");
    }
    printf("\n\n");
}
