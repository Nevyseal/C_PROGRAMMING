#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,square,cube,sqr,cubr;
    printf("Enter a number:");
    scanf("%f",&x);

    square=pow(x,2);
    cube=pow(x,3);
    sqr=sqrt(x);
    cubr=cbrt(x);

        printf("The square is: %f\n",square);
        printf("The cube is : %f\n",cube);
        printf("The square root is : %f \n",sqr);
        printf("The cube root is: %f ",cubr);
        return 0;

}




