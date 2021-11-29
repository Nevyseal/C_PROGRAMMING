#include<stdio.h>
struct rightangle_try
{
    float base,height,area;
};
void main ()
{
    struct rightangle_try tringle1;

    printf("Enter The height of the Triangle :");
    scanf("%f",&tringle1.height);
    printf("\nEnter The Base of the Triangle :");
    scanf("%f",&tringle1.base);

    tringle1.area = 0.5 * tringle1.height * tringle1.base;

    printf("\nThe area is %f",tringle1.area);
    printf("\n\n");



}
