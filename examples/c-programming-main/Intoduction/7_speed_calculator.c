#include <stdio.h>
#include <stdlib.h>

int main()
{
    double distanceTravelled, timeTaken;

    // Inputs
    printf("\nEnter the distance Travelled in meters: ");
    scanf("%lf", &distanceTravelled);

    printf("\nEnter the time taken in minutes: ");
    scanf("%lf", &timeTaken);

    // Conversion
    float speed = (distanceTravelled / 1000) * (timeTaken / 60);

    // Output
    printf("\n\tYour speed is %.fKm/h\n",speed);

    return 0;
}
