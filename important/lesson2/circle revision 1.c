#include<stdio.h>
#define PIE 'X'

int main(){
    int radius,area,circumference;
    printf("Enter the radius:");
    scanf("%d",&radius);
    area=PIE*radius*radius;
    circumference=PIE*radius*2;
    printf("\n\nThe area is equal to:%d",area);
    printf("\n\nThe circumference is equal to:%d",circumference);






}
