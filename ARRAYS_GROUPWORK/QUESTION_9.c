#include <stdio.h>

void main()
{
    int xAxis = 0, yAxis = 0;
    float sum = 0, mean;

    // i) intialize with values
    int array[2][5] = {{1, 4, 7, 8, 6}, {23, 30, 47, 63, 50}};

    // ii) mean
    for (yAxis = 0; yAxis < 5; yAxis++)
    {
        for (xAxis = 0; xAxis < 2; xAxis++)
        {
            sum += array[xAxis][yAxis];
            printf("%d ", array[xAxis][yAxis]);
        }
    }
    mean = sum / (xAxis + yAxis);
    printf("\nThe mean is %.2f ", mean);

    // iii) print last statement
    printf("\nThe last value in the array is %2d", array[1][4]);
}
