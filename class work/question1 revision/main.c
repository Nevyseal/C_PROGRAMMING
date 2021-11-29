#include <stdio.h>


int main()
{
    int number,power,answer = 1,i;

    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Enter the power: ");
    scanf("%d",&power);

    for(i=1; i<= power; i++)
        answer = answer * number;

    printf("\n%d power %d = %d\n",number,power,answer);
}
