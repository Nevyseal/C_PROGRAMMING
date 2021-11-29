#include<stdio.h>
struct conversion
{
    float myinput;
};
void main()
{
    struct conversion centi,answer;

   printf("Enter The measurement in centimeters :");
   scanf("%f",&centi.myinput);

   answer.myinput = centi.myinput/100;

   printf("\n\n%.2fcm = %.2fM",centi.myinput,answer.myinput);
   printf("\n\n");

}
