#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kilometers;

    // Input
    printf("\nEnter didtance in kilometers: ");
    scanf("%f", &kilometers);

    // Conversion
    float meters = kilometers * 1000.0;

    // Output
    printf("\n\t%.2f kilometers is %.1f meters\n", kilometers, meters);

    return 0;
}
