#include<stdio.h>
int main(){

   float distance,time,speed,hrs,dsk;
    printf("Enter the distance in meters: ");
    scanf("%f", &distance);
    dsk=distance/1000;
    printf("Enter the time in minutes:");
    scanf("%f",&time);
    hrs=time/60;
    speed=(dsk/hrs);
    printf("Speed in Km/h is: %f",speed );

return 0;







}
