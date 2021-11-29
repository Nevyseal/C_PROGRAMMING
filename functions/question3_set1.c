#include<stdio.h>
float taxation(float grosspay);
void main()
{
    float gross_pay,Netpay;

    printf("Enter The GrossPay :");
    scanf("%f",&gross_pay);

    Netpay = taxation(gross_pay);

    printf("\n\nThe Netpay is %f",Netpay);
}
float taxation(float grosspay)
{
    float tax,netpay;
    if ((grosspay >= 40000) && (grosspay >= 40000))
    {
        tax = (grosspay*30)/100;
        netpay = grosspay-tax;

    }else if ((grosspay >= 30000) && (grosspay < 40000 ))
    {
        tax = (grosspay*25)/100;
        netpay = grosspay-tax;
    }else if ((grosspay >= 20000) && (grosspay < 30000))
    {
        tax= (grosspay*15)/100;
        netpay = grosspay-tax;
    }else if ((grosspay >= 10000) && (grosspay < 20000))
    {
        tax = (grosspay*10)/100;
        netpay = grosspay-tax;
    }else if ((grosspay >= 0) && (grosspay < 10000))
    {
        netpay=grosspay;
    }
}

