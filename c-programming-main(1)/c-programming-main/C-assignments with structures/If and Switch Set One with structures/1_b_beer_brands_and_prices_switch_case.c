#include <stdio.h>

struct beer
{
    ;
    float amount;
    int choice;
};
void main()
{
    struct beer b_1;

    //Display the menu
    printf("\n\t ****Jamal and DaughtersPub****\n\n");
    printf("\tBeer Brand \t\tPrice\n");
    printf("\t 1)Tusker\t\t100/=\n");
    printf("\t 2)Pilsner\t\t120/=\n");
    printf("\t 3)Smirnoff Ice\t\t140/=\n");
    printf("\t 4)White Cap\t\t90/=\n\n");

    //Accept the input

    printf("\tEnter your choice: ");
    scanf("%d", &b_1.choice);

    switch (b_1.choice)
    {
    case 1:
        printf("\n\tHow many bottles of Tusker do you want? ");
        scanf("%d", &b_1.amount);
        printf("\n\t%d bottles of Tusker will cost you Kshs.%d\n", b_1.amount, b_1.amount * 100);
        break;
    case 2:
        printf("\n\tHow many bottles of Pilsner do you want? ");
        scanf("%d", &b_1.amount);
        printf("\n\t%d bottles of Pilsner will cost you Kshs.%d\n", b_1.amount, b_1.amount * 100);
        break;
    case 3:
        printf("\n\tHow many bottles of Smirnoff Ice do you want? ");
        scanf("%d", &b_1.amount);
        printf("\n\t%d bottles of Smirnoff Ice will cost you Kshs.%d\n", b_1.amount, b_1.amount * 140);
        break;
    case 4:
        printf("\n\tHow many bottles of White Cap do you want? ");
        scanf("%d", &b_1.amount);
        printf("\n\t%d bottles of White Cap will cost you Kshs.%d\n", b_1.amount, b_1.amount * 90);
        break;
    default:
        printf("\n\tInvalid input!\n");
    }
}
