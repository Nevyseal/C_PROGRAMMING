#include <stdio.h>
#include <stdlib.h>

int main()
{
    float firstnumber,secondnumber, action1;
    printf("Enter two numbers:");
    scanf("%f %f",&firstnumber,&secondnumber);

    action1=firstnumber/secondnumber;

    if(firstnumber > secondnumber)
        printf("The result is:%f",action1);
        else if((firstnumber < 0) ||  (secondnumber <0 ))
            printf("INVALID INPUT");
}
