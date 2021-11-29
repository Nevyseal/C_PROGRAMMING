#include <stdio.h>

void main()
{
    float number;
    printf("\nPlease enter a number to check: ");
    scanf("%f",&number);

    if(number < 0)
        printf("\nYour number %.1f, is a negative number.\n",number);
    
    else if(number == 0 || number > 0)
        printf("\nYour number %.1f, is a positive number.\n",number);
    
    else
        printf("Invalid number input");

}
