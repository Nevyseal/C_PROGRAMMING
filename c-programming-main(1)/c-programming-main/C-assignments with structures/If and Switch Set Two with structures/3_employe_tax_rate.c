#include <stdio.h>

struct employee
{
    char gender;
    double earning, tax, earningAfterTax, taxedAmount;
};
void main()
{
    struct employee employ_1;
    // Inputs
    printf("\nEnter the gender(m/f): ");
    scanf("%c", &employ_1.gender);
    printf("\nEnter the earning OF the person: ");
    scanf("%lf", &employ_1.earning);

    // computation
    switch (employ_1.gender)
    {
    case 'f':
        if (employ_1.earning < 15000)
        {
            employ_1.tax = employ_1.earning * (12.0 / 100);
            employ_1.earningAfterTax = employ_1.earning - employ_1.tax;
            employ_1.taxedAmount = employ_1.earning - employ_1.earningAfterTax;
            printf("\n\tYour Tax rate is 12%%.\n\tYour Tax is %.2lf", employ_1.taxedAmount);
        }
        else if (employ_1.earning >= 15000)
        {
            employ_1.tax = employ_1.earning * (14.0 / 100);
            employ_1.earningAfterTax = employ_1.earning - employ_1.tax;
            employ_1.taxedAmount = employ_1.earning - employ_1.earningAfterTax;
            printf("\n\tYour Tax rate is 14%%.\n\tYour Tax is %.2lf", employ_1.taxedAmount);
        }
        printf("\n\tThe earning after taxation is : %.2lf\n", employ_1.earningAfterTax);
        break;

    case 'm':
        if (employ_1.earning < 14000)
        {
            employ_1.tax = employ_1.earning * (13.0 / 100);
            employ_1.earningAfterTax = employ_1.earning - employ_1.tax;
            employ_1.taxedAmount = employ_1.earning - employ_1.earningAfterTax;
            printf("\n\tYour Tax rate is 13%%.\n\tYour Tax is %.2lf", employ_1.taxedAmount);
        }
        else if (employ_1.earning >= 15000)
        {
            employ_1.tax = employ_1.earning * 0.15;
            employ_1.earningAfterTax = employ_1.earning - employ_1.tax;
            employ_1.taxedAmount = employ_1.earning - employ_1.earningAfterTax;
            printf("\n\tYour Tax rate is 15%% percent.\n\tYour Tax is %.2lf", employ_1.taxedAmount);
        }
        printf("\n\tThe earning after taxation is : %.2lf\n", employ_1.earningAfterTax);
        break;

    default:
        printf("\n\n\tINVALID INPUT TRY AGAIN!\n");
    }
}
