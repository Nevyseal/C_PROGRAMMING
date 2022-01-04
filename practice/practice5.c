#include<stdio.h>
int main()
{
    int number,i;
  double arry[100];
    printf("How many numbers do you want to work with :");
    scanf("%d", &number);

    for(i = 0; i < number;++i)
    {
        printf("Enter Number %d :",i+1);
        scanf("%lf",&arry[i]);
       
    }
    for(i = 1; i < number;++i)
    {
        if(arry[0] < arry[i])
        {
            arry[0] = arry[i];
        }
    }
    printf("The largest values are : %.2lf",arry[0]);



}