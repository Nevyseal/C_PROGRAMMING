#include <stdio.h>
#include <stdlib.h>

struct distance
{
    float centimeter, meter, kilometer;
};
int main()
{
    struct distance dist_1;

    // Input
    printf("\nEnter didtance in kilometers: ");
    scanf("%f", &dist_1.kilometer);

    // Conversion
    dist_1.meter = dist_1.kilometer * 1000.0;

    // Output
    printf("\n\t%.2f kilometers is %.1f meters\n", dist_1.kilometer, dist_1.meter);

    return 0;
}
