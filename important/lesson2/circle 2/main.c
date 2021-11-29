#include<stdio.h>


int main(){


    const char PIE = 22.0/7;
    int radius,area,circumference;
    printf("Enter the radius of the circle:");
    scanf("%d",&radius);
    area=PIE*(radius*radius);
    circumference=PIE*(radius*2);
    printf("\n\nThe area is equal to:%d",area);
    printf("\n\nThe circumference is equal to:%d",circumference);






}
