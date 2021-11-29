#include <stdio.h>
#include <stdlib.h>

int main()
{
    int speed,speedlimit,levyfine,levyfine1,excessspeed;
    printf("Enter the vehicle's speed:");
    scanf("%d",&speed);
    printf("\n\nEnter the speed limit:");
    scanf("%d",&speedlimit);
    levyfine=2500;
    levyfine1=4000;
    excessspeed=speed-speedlimit;



    if(speed <= speedlimit)
        printf("\n\nNo Fine");
    else if(speed < speedlimit+30){
        printf("\n\nThe excess speed :%d",excessspeed);
        printf("\n\nThe vehicle's speed is :%d",speed);
        printf("\n\nThe speed limit is:%d",speedlimit);
        printf("\n\nThe fine is:%d",levyfine);
    }else{
         printf("\n\nThe excess speed :%d",excessspeed);
        printf("\n\nThe vehicle's speed is :%d",speed);
        printf("\n\nThe speed limit is:%d",speedlimit);
        printf("\n\nThe fine is:%d",levyfine1);

    }






}
