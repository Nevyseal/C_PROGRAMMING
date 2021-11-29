#include <stdio.h>
#include <stdlib.h>



int main()
{
   char alphabet[50];
   int i;
   printf("\nEnter An Alphabet:");
   gets(alphabet);

   for(i = 0;alphabet [i] != 0; i++ )
   {
       if(alphabet[i] >= 65  && alphabet[i] <= 90)
        {
            alphabet[i] =alphabet[i]+32;

       }
       else if (alphabet[i] >= 97 && alphabet[i] <= 122)
       {
           alphabet[i]=alphabet[i]-32;
       }
       printf("\nReverse case is %s \n",alphabet);
       break;

   }


}
