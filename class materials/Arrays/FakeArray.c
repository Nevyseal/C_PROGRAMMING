#include<stdio.h>
void main()
{
    int mark[10];
    float sum, avg;

    printf("Enter the mark for student 1: ");
    scanf("%d",&mark[0]);
    printf("Enter the mark for student 2: ");
    scanf("%d",&mark[1]);
    printf("Enter the mark for student 3: ");
    scanf("%d",&mark[2]);
    printf("Enter the mark for student 4: ");
    scanf("%d",&mark[3]);
    printf("Enter the mark for student 5: ");
    scanf("%d",&mark[4]);
    printf("Enter the mark for student 6: ");
    scanf("%d",&mark[5]);
    printf("Enter the mark for student 7: ");
    scanf("%d",&mark[6]);
    printf("Enter the mark for student 8: ");
    scanf("%d",&mark[7]);
    printf("Enter the mark for student 9: ");
    scanf("%d",&mark[8]);
    printf("Enter the mark for student 10: ");
    scanf("%d",&mark[9]);

    sum = mark[0] + mark[1] + mark[2] + mark[3] + mark[4] + mark[5] + mark[6] + mark[7] + mark[8] + mark[9];
    avg = sum / 10;

    printf("\nThe average mark is %.2f\n\n",avg);
}
