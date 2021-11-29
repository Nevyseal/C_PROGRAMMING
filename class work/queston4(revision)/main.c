#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch;
   printf("Enter a Character:");
   scanf("%c",&ch);
    if((ch>='a' && ch<='z')  || (ch>='A' && ch<='Z')){
        printf("Its a character");
    }else if(ch >='0' &&  (ch<='9')){
        printf("Its a digit");

    }else
    printf("Its a special Character");

}
