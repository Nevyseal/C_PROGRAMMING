#include<stdio.h>
struct packages
{
    float weight,kilos,packs;
};
void main ()
{
    struct packages myinput;

    printf("\nEnter the weight in grams :");
    scanf("%f",&myinput.weight);


    myinput.kilos=myinput.weight/1000;
    myinput.packs=1000/myinput.weight;

    printf("\n\nThe weight of the package is %f kilograms.\n\nIt takes %f such packages to form one Kilogram",myinput.kilos,myinput.packs);
    printf("\n\n");



}
