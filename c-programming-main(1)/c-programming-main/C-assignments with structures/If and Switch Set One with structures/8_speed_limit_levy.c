#include <stdio.h>
#include <stdlib.h>

struct fines
{
    int Speed, Limit, Exceeded, fine;
};

int main()
{
    struct fines person_1;

    printf("\n\tEnter the vehicle speed: ");
    scanf("%d", &person_1.Speed);

    printf("\n\tEnter the speed limit: ");
    scanf("%d", &person_1.Limit);

    person_1.Exceeded = person_1.Speed - person_1.Limit;

    if ((person_1.Exceeded > 0) && (person_1.Exceeded < 30))
    {
        person_1.fine = 2500;
        printf("\n\tVehicle Speed: %d | Speed limit: %d | Excess Speed: %d | Fine Levied: %d\n", person_1.Speed, person_1.Limit, person_1.Exceeded, person_1.fine);
    }
    else
    {
        person_1.fine = 4000;
        printf("\n\tVehicle Speed: %d | Speed limit: %d | Excess Speed: %d | Fine Levied: %d\n", person_1.Speed, person_1.Limit, person_1.Exceeded, person_1.fine);
    }
    return 0;
}