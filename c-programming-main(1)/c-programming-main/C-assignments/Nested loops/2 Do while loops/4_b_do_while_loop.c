#include <stdio.h>

int main()
{
    int xAxis, yAxis = 1;
    int number, counter = 1;

    printf("\n\n");

    do
    {
        xAxis = 1;
        do
        {
            number = xAxis + counter;
            printf("  %d", number);
            xAxis++;

        } while (xAxis <= 5);

        yAxis++;
        counter++;
        printf("\n");

    } while (yAxis <= 5);

    printf("\n\n");
}