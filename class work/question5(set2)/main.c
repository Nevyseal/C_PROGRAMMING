#include <stdio.h>
#include <stdlib.h>

int main()
{
   float score,average,one,two,three,four,five;
   printf("Enter score in your 5 subjects:");
   scanf("%f %f %f %f %f",&one,&two,&three,&four,&five);
   average = (one+two+three+four+five)/5;

   if((average >=75) && (average<100))
    printf("\n\nDISTINCTION");
   else if((average>=65) && (average< 75))
    printf("CREDIT");
   else if ((average>=50) && (average<65))
    printf("PASS");
   else if((average>=0) && (average<50))
    printf("FAIL");
}
