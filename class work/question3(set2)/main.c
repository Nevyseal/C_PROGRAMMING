#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salary,gender,tax,taxfemale1,taxfemale2,taxmale1,taxmale2,male,female;
    printf("EMPLOYEE                              TAX RATES IN PERCENT");
    printf("\n\na)Female earning < 15000                12%");
    printf("\n\nb)Female earning >= 15000               14%");
    printf("\n\nc)Male earning < 14000                  13%");
    printf("\n\nd)Male earning >= 14000                 15%");
    printf("\n\nEnter the Category:");
    scanf("%c",&gender);



   taxfemale1=(salary*12)/100;
   taxfemale2=(salary*14)/100;
   taxmale1=(salary*13)/100;
   taxmale2=(salary*15)/100;

   switch(gender){
   case 'a':
    printf("\n\nEnter the salary:");
    scanf("%d",&salary);
     taxfemale1=(salary*12)/100;
    printf("\n\nThe Tax is:%d",taxfemale1);
    break;

   case 'b':
    printf("\n\nEnter the salary:");
    scanf("%d",&salary);
    taxfemale2=(salary*14)/100;
    printf("\n\nThe Tax is:%d",taxfemale2);
    break;

   case 'c':
    printf("\n\nEnter the salary:");
    scanf("%d",&salary);
    taxmale1=(salary*13)/100;
    printf("\n\nThe Tax is:%d",taxmale1);
    break;

   case 'd':
    printf("\n\nEnter the salary:");
    scanf("%d",&salary);
    taxmale2=(salary*15)/100;
    printf("\n\nThe Tax is:%d",taxmale2);
    break;













   }
}
