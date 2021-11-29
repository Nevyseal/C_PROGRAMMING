#include <stdio.h>

void main()
{
    int xAxis, yAxis = 65;
    int sum;

    printf("\n\n");

    while (yAxis >= 30)
    {
        xAxis = 0;
        while (xAxis <= 50)
        {
            if (yAxis == 65 && xAxis == 0)
            {
                printf("   +");
            }
            else if (yAxis == 65)
            {
                printf("%4d", xAxis);
            }
            else
            {
                sum = xAxis + yAxis;
                printf("%4d", sum);
            }
            xAxis += 10;
        }

        yAxis -= 5;
        printf("\n");
    }
    printf("\n\n");
}