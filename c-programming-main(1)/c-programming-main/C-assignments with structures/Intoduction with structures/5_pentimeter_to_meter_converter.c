#include <stdio.h>
#include <stdlib.h>

struct distance
{
    float centimeter, meter;
};

int main()
{
    struct distance dist_1;

    printf("\nEnter length in centimeters: ");
    scanf("%f", &dist_1.centimeter);

    // Conversion
    dist_1.meter = dist_1.centimeter * (1.0 / 1000);

    // Output
    printf("\n\t%d cm = %.f meters \n", dist_1.centimeter, dist_1.meter);

    return 0;
}
