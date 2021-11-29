#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Accept the input, the gross pay
    int grossPay;
    printf("\tPlease enter your gross pay e.g 40000: ");
    scanf("%d", &grossPay);

    //Pass the gross pay through logic to determine how much tax to apply
    float tax;
    float netPay;

    if (grossPay > 40000)
    {
        tax = grossPay * 30.0 / 100;
        netPay = grossPay - tax;
        printf("\n\tYour net pay is %.2f\n", netPay);
    }
    else if ((grossPay >= 30000) && (grossPay < 40000))
    {
        tax = grossPay * 25.0 / 100;
        netPay = grossPay - tax;
        printf("\n\tYour net pay is %.2f\n", netPay);
    }
    else if((grossPay >= 20000) && (grossPay < 30000){
        tax = grossPay * 15.0 / 100;
        netPay = grossPay - tax;
        printf("\n\tYour net pay is %.2f\n", netPay);
    }
    else if((grossPay >= 10000) && (grossPay < 20000){
        tax = grossPay * 10.0 / 100;
        netPay = grossPay - tax;
        printf("\n\tYour net pay is %.2f\n", netPay);
    }
    else if(grossPay < 10000){
        tax = 0;
        netPay = grossPay - tax;
        printf("\n\tYour net pay is %.2f\n", netPay);
    }2
    else{
        printf("\n\tInvalid input\n");
    }

    return 0;
}
