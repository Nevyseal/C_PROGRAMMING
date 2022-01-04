#include<stdio.h>
void main()
{
    int year;
    printf("Enter an Year :");
    scanf("%d",&year);
    if(year % 4 == 0)
    {
        printf("%d is a leep year",year);
    }else
    printf("%d is not a leep year",year);
}