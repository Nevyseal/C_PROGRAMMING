#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

     if((number % 2 == 0)  &&  (number % 9 ==0))
        printf("\n%d is divisible by nine",number);
        else
            printf("\n%d is not divisible by nine.",number);

}
