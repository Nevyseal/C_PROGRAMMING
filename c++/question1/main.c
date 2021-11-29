#include<stdio.h>
int main(){
    int number_one,number_two,number_three,sum,product,average;
    printf("\nEnter number_one:");
    scanf("%d",&number_one);

   printf("\nEnter number_two");
   scanf("%d",&number_two);

    printf("\nEnter number_three:");
    scanf("%d",&number_three);
    sum=number_one+number_two+number_three;
    product=number_one*number_two*number_three;
    average=(number_one+number_two+number_three)/3;
    printf("\nThe sum is:%d",sum);
    printf("\nThe product is:%d",product);
    printf("\nThe average is:%d",average);
    return 0;



}

