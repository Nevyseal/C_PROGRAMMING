#include <stdio.h>
#include <stdlib.h>

struct netpay
{
    float grossPay, tax, netPay;
};

int main()
{
    struct netpay person_1;

    printf("\tPlease enter your gross pay : ");
    scanf("%f", &person_1.grossPay);

    if (person_1.grossPay > 40000)
    {
        person_1.tax = person_1.grossPay * 30.0 / 100;
        printf("\n\tYour net pay is %.2f\n", person_1.grossPay - person_1.tax);
    }
    else if ((person_1.grossPay >= 30000) && (person_1.grossPay < 40000))
    {
        person_1.tax = person_1.grossPay * 25.0 / 100;
        printf("\n\tYour net pay is %.2f\n", person_1.grossPay - person_1.tax);
    }
    else if ((person_1.grossPay >= 20000) && (person_1.grossPay < 30000))
    {
        person_1.tax = person_1.grossPay * 15.0 / 100;
        printf("\n\tYour net pay is %.2f\n", person_1.grossPay - person_1.tax);
    }
    else if ((person_1.grossPay >= 10000) && (person_1.grossPay < 20000))
    {
        person_1.tax = person_1.grossPay * 10.0 / 100;
        printf("\n\tYour net pay is %.2f\n", person_1.grossPay - person_1.tax);
    }
    else if (person_1.grossPay < 10000)
    {
        person_1.tax = 0;
        printf("\n\tYour net pay is %.2f\n", person_1.grossPay - person_1.tax);
    }
    else
    {
        printf("\n\tInvalid input\n");
    }

    return 0;
}
