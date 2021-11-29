#include <stdio.h>

float Temp(int farenheight)
{
    float celcious;
    celcious = (farenheight - 32) * 5 / 9;
    return celcious;
}

void main()
{
    int farenheight;

    printf("\n\tFahrenheit\tCelsius");
    for (farenheight = 0; farenheight <= 300; farenheight += 20)
    {
        printf("\n\t%3d\t\t%6.2f", farenheight, Temp(farenheight));
    }
    printf("\n\n");
}
