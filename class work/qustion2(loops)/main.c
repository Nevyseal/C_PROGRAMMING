#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number1,number2,number3,number4,number5,number6,number7,sum;
   printf("Enter several numbers to be summed:");
   scanf("%d %d %d %d %d %d %d",&number1,&number2,&number3,&number4,&number5,&number6,&number7);





     sum = number1 + number2 + number3 + number4 +   number5 + number6 + number7;
     if((number1 >0) && (number2>0) &&(number3>0)&&(number4>0) &&(number5>0) && (number6>0) && (number7>0))


     printf("The sum should be:%d",sum);


}
