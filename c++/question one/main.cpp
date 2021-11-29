#include<stdio.h>
int main(){
    int first,second,third,add,product,average;

    printf("Enter the first number:");
    scanf("%d",&first);
    printf("Enter second number:");
    scanf("%d",&second);
    printf("Enter the third number:");
    scanf("%d",&third);
    add =first+second+third;
    product=first*second*third;
    average=first+second+third/2;
    printf_s("The sum is:%d",add);


    printf_s("The product is:%d",product);


    printf_s("The average is:%d",average);







}
