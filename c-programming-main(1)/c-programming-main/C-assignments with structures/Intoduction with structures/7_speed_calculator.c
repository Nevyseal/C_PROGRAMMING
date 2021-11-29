#include <stdio.h>
#include <stdlib.h>

struct speed_Km_h
{
    float distanceTravelled, timeTaken, speed;
};
int main()
{

    struct speed_Km_h sp_1;
    // Inputs
    printf("\nEnter the distance Travelled in meters: ");
    scanf("%lf", &sp_1.distanceTravelled);

    printf("\nEnter the time taken in minutes: ");
    scanf("%lf", &sp_1.timeTaken);

    // Conversion
    sp_1.speed = (sp_1.distanceTravelled / 1000.0) * (sp_1.timeTaken / 60.0);

    // Output
    printf("\n\tYour speed is %.fKm/h\n", sp_1.speed);

    return 0;
}
