#include <stdio.h>

void main()
{
    int xAxis, yAxis, product;

    printf("\n\n");

    for (yAxis = 0; yAxis <= 5; yAxis++)
    {

        for (xAxis = 0; xAxis <= 6; xAxis++)
        {

            if ((yAxis == 0) && (xAxis == 0))
            {
                printf("  *");
            }
            else if (yAxis == 0)
            {
                printf("%3d", xAxis);
            }
            else if (xAxis == 0)
            {
                printf("%3d", yAxis);
            }
            else
            {
                product = yAxis * xAxis;
                printf("%3d", product);
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
