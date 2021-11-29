#include <stdio.h>
#include <stdlib.h>

int main()
{
 float number,i;
  printf("Enter a number:");
  scanf("%f",&number);

  for(i = 1;i*i<number;i++);

    printf("The square root is :%f",i);
}
