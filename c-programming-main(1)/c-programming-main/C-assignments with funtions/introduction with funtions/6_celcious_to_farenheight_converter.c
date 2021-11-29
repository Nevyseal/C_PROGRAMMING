#include <stdio.h>
#include <stdlib.h>
float celcious_to_farenheight(float celcious);
int main()
{
    // Input
    float celcious;

    printf("\nEnter temperature in degrees celcious: ");
    scanf("%f", &celcious);

    // Output
    printf("\n\t%.1f°C is %.1f°F\n", celcious, celcious_to_farenheight(celcious));
}
float celcious_to_farenheight(float celcious)
{
    float farenheight = celcious * (1.8 + 32);
    return farenheight;
}
