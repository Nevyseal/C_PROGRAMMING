#include <stdio.h>
#include <stdlib.h>
struct temperature
{
    float celcius, farenheight;
};

int main()
{
    struct temperature temp_1;

    printf("\nEnter temperature in degrees celcious: ");
    scanf("%f", &temp_1.celcius);

    // Conversion

    temp_1.farenheight = temp_1.celcius * (1.8 + 32);

    // Output
    printf("\n\t%.1f°C is %.1f°F\n", temp_1.celcius, temp_1.farenheight);

    return 0;
}
