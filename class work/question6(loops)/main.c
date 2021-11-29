#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){


    int year,interest,balance,deposit,rate,time;
    printf("Enter the Deposit and rate :");
    scanf("%d %d",&deposit,&rate);
    year=0;
    interest =0;
    balance=0;
    interest =deposit*pow((1+rate/100),year);
    balance = deposit + interest;


    do {

    year=year+1;
    interest++;
    balance++;
    printf("\n\nYEAR:%d",year);
    printf("\t\tINTREST:%d",interest++);
    printf("\t\tBALANCE:%d",balance++);





    }while((year <=9) &&(interest > 1)  &&  (balance> 1));





}
