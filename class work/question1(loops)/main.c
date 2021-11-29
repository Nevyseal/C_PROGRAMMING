#include <stdio.h>


int main()
{
   int number,square,cube;
   number = 1;

   do {
    printf("\n\nNumber = %d",number);
    number = number + 1;
    printf("\t Square =%d",square);
    square = number*number;
    printf("\tCube =%d",cube);
    cube = number*number*number;



   }while(number <= 10);
}
