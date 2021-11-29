#include<stdio.h>
float taxation(float earning);
void main()
{
     float payment,Netpay;

    printf("Enter The GrossPay :");
    scanf("%f",&payment);

    Netpay = taxation(payment);

    printf("\n\nThe Netpay is %f",Netpay);
}
float taxation(float earning)
{
    float tax,Netpay;

    if(earning <15000)
    {
        tax = 12.0/100 * earning;
        Netpay = earning - tax ;

    }else if(earning >= 15000)
    {
        tax =14.0/100 * earning;
        Netpay = earning - tax;

    }else if(earning < 14000)
    {
        tax = 13.0/100 * earning;
        Netpay = earning - tax;

    }else if (earning >= 14000)
    {
        tax = 15.0/100 * earning;
        Netpay = earning - tax;
    }
}

