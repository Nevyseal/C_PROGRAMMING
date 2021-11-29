#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number,square,cube;

   for(number =2; number<=10;number++)
   {


    square =number*number;
    cube=number*number*number;

   printf("\n\nNumber = %d",number);
   printf("\t\tSquare =%d",square);
   printf("\t\tCube =%d",cube);
   }

}
