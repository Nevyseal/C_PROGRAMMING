#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Input
    int centimeters;

    printf("\nEnter length in centimeters: ");
    scanf("%d", &centimeters);

    // Conversion
    float meters = centimeters * (1.0 / 1000);

    // Output
    printf("\n\t%d cm = %.f meters \n", centimeters, meters);

    return 0;
}
