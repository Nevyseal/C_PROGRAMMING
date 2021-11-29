#include<stdio.h>

int main()
{
    int i;
    float sum = 0, temperature[10],average;
    float coolest = 100,hottest = 0;

    for(i = 1;i < 8; i++)
    {
        printf("\nEnter the Temperature in degree celcius of day %d :",i);
        scanf("%f",&temperature[i]);

        sum = sum + temperature[i];

        if(hottest < temperature[i])
            hottest = temperature[i];


       if(coolest > temperature[i])
            coolest = temperature[i];



    }
     average = sum/7;
     printf("\n\nThe hottest day is %.1f:",hottest);
     printf("\n\nThe coolest day is %.1f",coolest);
     printf("\n\nThe Average is %.1f",average);
     printf("\n\n");
}
