#include <stdio.h>
float centimeters_to_meters(int centimeters);

void main()
{
    // Input
    int centimeters;

    printf("\nEnter length in centimeters: ");
    scanf("%d", &centimeters);

    // Output
    printf("\n\t%d cm = %.f meters \n", centimeters, centimeters_to_meters(centimeters));
}
float centimeters_to_meters(int centimeters)
{
    return centimeters * (1.0 / 1000);
}