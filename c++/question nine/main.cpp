#include<stdio.h>
int main(){
  float grams,kilos,packs;

    printf("Enter the weight in grams for the package: ");
    scanf("%f", &grams);

    kilos=grams/1000;
    packs=1000/grams;

    printf("The weight of the package is %f kilograms. It takes %f such packages to form one Kilogram",kilos,packs);

    return 0;



}
