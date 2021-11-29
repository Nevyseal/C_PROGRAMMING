#include <stdio.h>
#include <stdlib.h>

int main()
{
  float firstnumber,secondnumber,action1,action2,action3;
  printf("\n\nEnter two numbers:");
  scanf("%f %f",&firstnumber,&secondnumber);

  action1=firstnumber-secondnumber;
  action2=secondnumber/firstnumber;
  action3=firstnumber+secondnumber;



  if(firstnumber > secondnumber)
    printf("The result is:%f",action1);
    else if(secondnumber > firstnumber)
        printf("The result is:%f",action2);
        else if((secondnumber >! firstnumber)  ||(firstnumber <! secondnumber))
            printf("The result is:%f",action3);


}
