#include<stdio.h>
void main()
{
    int number[10],i;
    for(i = 1; i <= 100; i++)
    {
        if(number[i] >= 1  && number[i] <= 100)  
        {
            printf("\n%d",number[i]);
        }

    }
}