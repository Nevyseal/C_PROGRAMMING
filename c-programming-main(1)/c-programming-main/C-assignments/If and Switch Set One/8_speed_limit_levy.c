#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Speed, Limit, Exceeded, fine;

    printf("\n\tEnter the vehicle speed: ");
    scanf("%d",&Speed);

    printf("\n\tEnter the speed limit: ");
    scanf("%d",&Limit);

    Exceeded = Speed - Limit;

    if((Exceeded > 0) && (Exceeded < 30)){
        fine = 2500;
        printf("\n\tVehicle Speed: %d | Speed limit: %d | Excess Speed: %d | Fine Levied: %d\n",Speed,Limit,Exceeded,fine);
    }else {
        fine = 4000;
        printf("\n\tVehicle Speed: %d | Speed limit: %d | Excess Speed: %d | Fine Levied: %d\n",Speed,Limit,Exceeded,fine);
    }
    return 0;
}