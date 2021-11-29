#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch;
   printf("Enter a Character:");
   scanf("%c",&ch);

   if((ch >= 'A')  &&  (ch <= 'Z')){
    printf("%c is in uppercase",ch);

   }else if((ch >= 'a') &&  (ch<='z')){
    printf("%c is in lowercase",ch);

   }else
   printf("%c is not a letter",ch);
}
