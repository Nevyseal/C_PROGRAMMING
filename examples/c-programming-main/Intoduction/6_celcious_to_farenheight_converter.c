#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Input
    float celcious;

    printf("\nEnter temperature in degrees celcious: ");
    scanf("%f", &celcious);

    // Conversion

    float farenheight = celcious * (1.8 + 32);

    // Output
    printf("\n\t%.1f°C is %.1f°F\n", celcious, farenheight);

    return 0;
}
