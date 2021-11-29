#include<stdio.h>
struct temrature_conversion
{
    float celcius;
};
void main ()
{
    struct temrature_conversion myinput,conversion;

    printf("Enter The Temprature in Degree Celcius :");
    scanf("%f",&myinput.celcius);

    conversion.celcius =(((myinput.celcius*9)/5)+32);

    printf("\n\nTemprature in Fahrenheit is %f",conversion.celcius);
    printf("\n\n");



}
