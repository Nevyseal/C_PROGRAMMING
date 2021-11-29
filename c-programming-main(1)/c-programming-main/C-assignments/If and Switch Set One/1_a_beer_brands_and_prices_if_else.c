#include <stdio.h>

void main()
{
    //Display the menu
    printf("\n\t ****Jamal and DaughtersPub****\n\n");
    printf("\tBeer Brand \t\tPrice\n");
    printf("\t 1)Tusker\t\t100/=\n");
    printf("\t 2)Pilsner\t\t120/=\n");
    printf("\t 3)Smirnoff Ice\t\t140/=\n");
    printf("\t 4)White Cap\t\t90/=\n\n");

    //Accept the input
    int choice;
    printf("\tEnter your choice: ");
    scanf("%d", &choice);

    //pass the choice through logic to determine price and then calculate total cost
    int amount, price;

    if (choice == 1)
    {
        printf("\n\tHow many bottles of Tusker do you want? ");
        scanf("%d", &amount);
        printf("\n\t%d bottles of Tusker will cost you Kshs.%d\n", amount, amount * 100);
    }
    else if (choice == 2)
    {
        printf("\n\tHow many bottles of Pilsner do you want? ");
        scanf("%d", &amount);
        printf("\n\t%d bottles of Pilsner will cost you Kshs.%d\n", amount, amount * 120);
    }
    else if (choice == 3)
    {
        printf("\n\tHow many bottles of Smirnoff Ice do you want? ");
        scanf("%d", &amount);
        printf("\n\t%d bottles of Smirnoff Ice will cost you Kshs.%d\n", amount, amount * 140);
    }
    else if (choice == 4)
    {
        printf("\n\tHow many bottles of White Cap do you want? ");
        scanf("%d", &amount);
        printf("\n\t%d bottles of White Cap will cost you Kshs.%d\n", amount, amount * 90);
    }
    else
        printf("\n\tInvalid input!\n");
}
