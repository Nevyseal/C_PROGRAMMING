#include <stdio.h>

float calc_tax(float gross_pay);

int main()
{
    float gross_pay, tax_amount, y;

    printf("\nEnter the gross salary: ");
    scanf("%f", &gross_pay);

    printf("\n\tThe tax amount is %.2f\t", calc_tax(gross_pay));
    printf("\n\tThe net pay is %.2f\n\n", gross_pay - calc_tax(gross_pay));
}
float calc_tax(float gross_pay)
{
    float tax_rate, tax_amount;

    if (gross_pay >= 50000)
        tax_rate = 35;
    else if (gross_pay >= 40000 && gross_pay < 50000)
        tax_rate = 30;
    else if (gross_pay >= 20000 && gross_pay < 40000)
        tax_rate = 25;
    else if (gross_pay >= 12000 && gross_pay < 20000)
        tax_rate = 15;
    else if (gross_pay >= 0 && gross_pay < 12000)
        tax_rate = 0;

    tax_amount = tax_rate / 100 * gross_pay;
    return tax_amount;
}
