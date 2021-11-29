#include <stdio.h>

void main()
{
    int product_code[100], quantity[100], number;
    float price[100], total_cost[100];

    printf("\nEnter the number of items: ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        printf("\nEnter the Product code %d: ", i + 1);
        scanf("%d", &product_code[i]);
        printf("\nEnter the Price %d: ", i + 1);
        scanf("%f", &price[i]);
        printf("\nEnter the Quantity %d: ", i + 1);
        scanf("%d", &quantity[i]);

        total_cost[i] = price[i] * quantity[i];
    }
    for (int i = 0; i < number; i++)
    {

        printf("\n\tItem Code\tPrice\tQuantity\ttotal Cost");

        printf("\n\t%d\t\t%6.2f\t  %3d\t\t%6.2f", product_code[i], price[i], quantity[i], total_cost[i]);
    }
    printf("\n\n");
}
