#include<stdio.h>
float temprature(float celcius);
void main()
{
    float degree,conversion;
    printf("Enter Temprature in celcius : ");
    scanf("%f",&degree);

    conversion = temprature(degree);
    printf("\nTemprature in Fahrenheit is: %f\n",conversion);
}
float temprature(float celcius)
{
    float conversion;
    conversion =(((celcius*9)/5)+32);
    return(conversion);
}



