#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char gender;
    double earning, tax, earningAfterTax, taxedAmount;

    // Inputs
    printf("\nEnter the gender(m/f): ");
    scanf("%c", &gender);
    printf("\nEnter the earning OF the person: ");
    scanf("%lf", &earning);

    // computation
    switch (gender)
    {
    case 'f':
        if (earning < 15000)
        {
            tax = earning * 12.0 / 100;
            earningAfterTax = earning - tax;
            taxedAmount = earning - earningAfterTax;
            printf("\n\tYour Tax rate is 12%%.\n\tYour Tax is %.2lf", taxedAmount);
        }
        else if ((earning >= 15000))
        {
            tax = earning * 14.0 / 100;
            earningAfterTax = earning - tax;
            taxedAmount = earning - earningAfterTax;
            printf("\n\tYour Tax rate is 14%%.\n\tYour Tax is %.2lf", taxedAmount);
        }
        printf("\n\tThe earning after taxation is : %.2lf\n", earningAfterTax);
        break;

    case 'm':
        if (earning < 14000)
        {
            tax = earning * 13.0 / 100;
            earningAfterTax = earning - tax;
            taxedAmount = earning - earningAfterTax;
            printf("\n\tYour Tax rate is 13%%.\n\tYour Tax is %.2lf", taxedAmount);
        }
        else if ((earning >= 15000))
        {
            tax = earning * 0.15;
            earningAfterTax = earning - tax;
            taxedAmount = earning - earningAfterTax;
            printf("\n\tYour Tax rate is 15%% percent.\n\tYour Tax is %.2lf", taxedAmount);
        }
        printf("\n\tThe earning after taxation is : %.2lf\n", earningAfterTax);
        break;

    default:
        printf("\n\n\tINVALID INPUT TRY AGAIN!\n");
    }

    return 0;
    getch();
}
