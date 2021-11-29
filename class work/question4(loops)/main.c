#include<stdio.h>
#include<string.h>

int main()
{
    float number,reciprocal;
   char choice[20];
    do
        {


   printf("\n\nEnter a number:");
   scanf("%f",&number);
   if(number != 0)
   {


   reciprocal = 1.0/number;
   printf("\n\nThe reciprocal of the number is:%f",reciprocal);
   }else if(number ==0)
   {
       printf("ERROR");


   }


   printf("\n\nDo you want to continue with this program press C and to exit press X  :");
   scanf("%s",&choice);

    }
    while(strcmp(choice,"C") == 0);



}

