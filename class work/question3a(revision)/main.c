o#include <stdio.h>
#include <stdlib.h>

int main()
{
 float number,i;

 printf("Enter a Number:");
 scanf("%f",&number);
  for(i = 2; i <= number/2; i = i+ 0.00001  )
  {
      if(i*i >= number){
        printf("The square root of %f is %f",number,i);
        break;
      }
  }


}
