#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number;
   printf("Enter a number:");
   scanf("%d",&number);

   if(number >= 0)
    printf("The number is POSITIVE");
   else
    printf("The number is NEGATIVE");
}
