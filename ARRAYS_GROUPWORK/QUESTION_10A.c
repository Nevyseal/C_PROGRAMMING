#include <stdio.h>

void main()
{
    int array[2][7] = {{0, 1, 2, 3, 4, 5, 6}, {0, 1, 2, 3, 4}};
    int xAxis, yAxis;

    printf("\n");

    for (yAxis = 0; yAxis <= 4; yAxis++)
    {
        for (xAxis = 0; xAxis <= 6; xAxis++)
        {
            if (xAxis == 0 && yAxis == 0)
            {
                printf(" * ");
            }
            else if (xAxis == 0)
            {
                printf("%2d ", array[1][yAxis]);
            }
            else if (yAxis == 0)
            {
                printf("%2d ", array[0][xAxis]);
            }
            else
            {
                printf("%2d ", array[0][xAxis] * array[1][yAxis]);
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
