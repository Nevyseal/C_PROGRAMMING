#include<stdio.h>
int main()
{
    int a,b,inter;


   printf("\nEnter a :");
   scanf("%d",&a);
   printf("\n\nEnter b :");
   scanf("%d",&b);

   inter = a;
   a = b;
   b = inter;
   printf("%d",b);




}
