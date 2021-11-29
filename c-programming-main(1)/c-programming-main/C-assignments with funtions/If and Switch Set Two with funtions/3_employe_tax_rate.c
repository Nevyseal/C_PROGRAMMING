#include <stdio.h>

float taxed_amount_calculation(float earn, float tx);

void main()
{
    char gender;
    float earning, tax;

    // Inputs
    printf("\nEnter the gender(m/f): ");
    scanf("%c", &gender);
    printf("\nEnter the earning OF the person: ");
    scanf("%f", &earning);

    // computation
    switch (gender)
    {
    case 'f':
        if (earning < 15000)
        {
            tax = earning * (12.0 / 100);
            printf("\n\tYour Tax rate is 12%%.\n\tYour Tax is %.2f", taxed_amount_calculation(earning, tax));
        }
        else if (earning >= 15000)
        {
            tax = earning * (14.0 / 100);
            printf("\n\tYour Tax rate is 14%%.\n\tYour Tax is %.2f", taxed_amount_calculation(earning, tax));
        }
        printf("\n\tThe earning after taxation is : %.2f\n", earning - tax);
        break;

    case 'm':
        if (earning < 14000)
        {
            tax = earning * (13.0 / 100);
            printf("\n\tYour Tax rate is 13%%.\n\tYour Tax is %.2f", taxed_amount_calculation(earning, tax));
        }
        else if (earning >= 15000)
        {
            tax = earning * 0.15;
            printf("\n\tYour Tax rate is 15%% percent.\n\tYour Tax is %.2f", taxed_amount_calculation(earning, tax));
        }
        printf("\n\tThe earning after taxation is : %.2f\n", earning - tax);
        break;

    default:
        printf("\n\n\tINVALID INPUT TRY AGAIN!\n");
    }
}

float taxed_amount_calculation(float earn, float tx)
{
    float earningAfterTax = earn - tx;
    return earn - earningAfterTax;
}
