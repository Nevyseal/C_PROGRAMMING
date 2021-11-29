#include <stdio.h>

void main()
{
    int xAxis, yAxis;
    int sum;

    printf("\n\n");

    for (yAxis = 65; yAxis >= 30; yAxis -= 5)
    {
        for (xAxis = 0; xAxis <= 50; xAxis += 10)
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
        }
        printf("\n");
    }
    printf("\n\n");
}