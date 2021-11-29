#include<stdio.h>
void main()
{
    float number_one,number_two,total;

    printf("Enter  two numbers-> ");
    scanf("%f",&number_one);
    scanf("%f",&number_two);

    total = number_one + number_two;

    printf("\nThe sum is %.3f\n\n",total);
}
