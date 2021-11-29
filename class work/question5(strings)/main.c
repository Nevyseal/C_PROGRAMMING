#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define str_size 50

int main()
{
  char str[str_size];
  int alph,digit,schar,i=0;
  printf("Enter the String:");
  gets(str);
  while(str[i]!='\0'){
    if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
        alph++;
    else if((str[i]>='0' && str[i]<='9'))
        digit++;
    else schar++;
    i++;

  }
  printf("\nNumber of Alphabets in the string is:%d",alph);
  printf("\nNumber of Digits in the String is :%d",digit);
  printf("\nNumber of special Characters is :%d",schar);
}
