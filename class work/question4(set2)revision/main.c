#include <stdio.h>
#include <stdlib.h>

int main()
{
    float X,Y,eqution1,eqution2,equition3;
    printf("Enter a Value of X:");
    scanf("%f",&X);

    if(X == 0)
        printf("INVALID VALUE");
    else if(X > 5){
    eqution1= (4*X*X*X)+(2*X)-6;
         printf("\n\nThe value of Y is:%f",eqution1);


    }
    else if(X < 5){

        eqution2= (3*X*X)-(4*X)+12;
        printf("\n\nThe value of Y is:%f",eqution2);
    }
    else if (X = 5){
        equition3=(6*X)-5;
         printf("\n\nThe value of Y is :%f",equition3);


    }
}
