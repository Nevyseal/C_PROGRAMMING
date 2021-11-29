#include<stdio.h>
 void main()
 {
     int i;
     double marks[10],average,sum = 0;


     for(i = 1;i < 6;i++)
     {
         printf("\nEnter The mark  %d :",i);
         scanf("%lf",&marks[i]);


          sum = sum +marks[i];
     }

     average = sum/5.0;

     printf("\n\nThe marks are :");
     for(i = 1;i < 6;i++)
        printf("\t%.1lf",marks[i]);

        printf("\n\nThe sum for all marks is : %.1lf",sum);
        printf("\n\nThe Average for all marks is : %.1lf",average);
        printf("\n\n");
 }
