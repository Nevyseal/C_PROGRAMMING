#include<stdio.h>
int main()
{
  int i,j;

  // outer for loop with increment operator
  for(i=1;i<=5;i++)
  {

     // inner for loop with decrement operator
     for(j=i;j>=1;j--)
     {
       printf("* ");
     }

     printf("\n");
  }
  return 0;
}
