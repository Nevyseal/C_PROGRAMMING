#include<stdio.h>
struct conversion_speed
{
    float distance,time,speed;

};
void main()
{
    struct conversion_speed myinput;

    printf("Enter The distance in Meters :");
    scanf("%f",&myinput.distance);
    printf("\n\nEnter The Time in Minutes :");
    scanf("%f",&myinput.time);

    myinput.speed = ((myinput.distance/1000) / (myinput.time/60));

    printf("\n\nThe speed In KM/Hr is %.3fKM/Hr",myinput.speed);
    printf("\n\n");


}
