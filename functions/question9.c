#include<stdio.h>
float packets(float weight);
float packages(float number,float weight);

void main()
{
    float grams,value1,value2,numb,weig;

    printf("Enter the weight in grams for the package: ");
    scanf("%f", &grams);
    printf("\nEnter the weight of packets in grams :");
    scanf("%f",&weig);

    value1 = packets(grams);
    value2 = packages(numb,weig);

    printf("\nThe weight of the package is %f kilograms.\n\nIt takes %f such packages to form one Kilogram",value1,value2);

}
float packets(float weight)
{
    float kilos;
    kilos=weight/1000;
    return(kilos);
}
float packages(float number,float weight)
{
    float packs;
    packs = 1000/weight;
    return(packs);
}
