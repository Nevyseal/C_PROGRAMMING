#include<stdio.h>
void main()
{
    int i,j;
    int number[12]={0,1,2,3,4,5,6,7,8,9,10};

    for(i = 1; i < 11;i++)
    {
        for(j = 1;j < 11;j++)
        {
            printf("%2d * %2d = %2d\n",number[i],number[j],number[i] * number[j]);
        }
        printf("\n\n");


    }
}
