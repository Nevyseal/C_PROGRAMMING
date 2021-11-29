#include <stdio.h>
#include <stdlib.h>

int exceeded(int Speed, int Limit);
void fine_info(int sp, int lm, int ex, int fn);

int main()
{
    int Speed, Limit, Exceeded, fine;

    printf("\n\tEnter the vehicle speed: ");
    scanf("%d", &Speed);

    printf("\n\tEnter the speed limit: ");
    scanf("%d", &Limit);

    Exceeded = exceeded(Speed, Limit);

    if ((Exceeded > 0) && (Exceeded < 30))
    {
        fine = 2500;
        fine_info(Speed, Limit, Exceeded, fine);
    }
    else
    {
        fine = 4000;
        fine_info(Speed, Limit, Exceeded, fine);
    }
    return 0;
}
int exceeded(int sp, int lm)
{
    int Exceeded;
    Exceeded = sp - lm;
    return Exceeded;
}
void fine_info(int sp, int lm, int ex, int fn)
{
    printf("\n\tVehicle Speed: %d | Speed limit: %d | Excess Speed: %d | Fine Levied: %d\n", sp, lm, ex, fn);
}
