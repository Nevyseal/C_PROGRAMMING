#include<stdio.h>
float value_cm(float value);
void main()
{
    float input,conversion1;
    printf("Enter The value in centimeters :");
    scanf("%f",&input);

    conversion1 = value_cm(input);
    printf("\nThe value in meters is :%f",conversion1);

}
float value_cm(float value)
{
    float conversion;
    conversion = value/100;
    return(conversion);

}
