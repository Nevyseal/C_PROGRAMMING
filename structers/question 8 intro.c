#include<stdio.h>
struct conversion_distance
{
    float distance,conversion;
};
void main ()
{
    struct conversion_distance myinput;

    printf("Enter The distance in Kilometers :");
    scanf("%f",&myinput.distance);

    myinput.conversion = myinput.distance* 1000;
    printf("\n\n%.3f kilometers = %.3fMeters",myinput.distance,myinput.conversion);
    printf("\n\n");
}
