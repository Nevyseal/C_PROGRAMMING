#include <stdio.h>
#include <stdlib.h>

void main()
{
    float kilometers;

    // Input
    printf("\nEnter didtance in kilometers: ");
    scanf("%f", &kilometers);

    // Output
    printf("\n\t%.2f kilometers is %.1f meters\n", kilometers, kilometers_to_meters(kilometers));
}
float kilometers_to_meters(float kilometers)
{
    return kilometers * 1000.0;
}
