#include <stdio.h>
#include <stdlib.h>

void net_pay_calculation(float gp, float tx);

int main()
{
    //Accept the input, the gross pay
    int grossPay;
    printf("\tEnter your gross pay: ");
    scanf("%d", &grossPay);

    //Pass the gross pay through logic to determine how much tax to apply
    float tax;
    float netPay;

    if (grossPay > 40000)
    {
        tax = grossPay * 30.0 / 100;
        net_pay_calculation(grossPay, tax);
    }
    else if ((grossPay >= 30000) && (grossPay < 40000))
    {
        tax = grossPay * 25.0 / 100;
        net_pay_calculation(grossPay, tax);
    }
    else if ((grossPay >= 20000) && (grossPay < 30000))
    {
        tax = grossPay * 15.0 / 100;
        net_pay_calculation(grossPay, tax);
    }
    else if ((grossPay >= 10000) && (grossPay < 20000))
    {
        tax = grossPay * 10.0 / 100;
        net_pay_calculation(grossPay, tax);
    }
    else if (grossPay < 10000)
    {
        tax = 0;
        net_pay_calculation(grossPay, tax);
    }
    else
    {
        printf("\n\tInvalid input\n");
    }

    return 0;
}
void net_pay_calculation(float gp, float tx)
{
    float netPay = gp - tx;
    printf("\n\tYour net pay is %.2f\n", netPay);
}
