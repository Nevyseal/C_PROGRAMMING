#include <stdio.h>
#include <stdlib.h>
float speed(float distanceTravelled, float timeTaken);
void main()
{
    double distanceTravelled, timeTaken;

    // Inputs
    printf("\nEnter the distance Travelled in meters: ");
    scanf("%lf", &distanceTravelled);

    printf("\nEnter the time taken in minutes: ");
    scanf("%lf", &timeTaken);

    // Output
    printf("\n\tYour speed is %.fKm/h\n", speed(distanceTravelled, timeTaken));
}
float speed(float distanceTravelled, float timeTaken)
{
    return (distanceTravelled / 1000.0) * (timeTaken / 60.0);
}