#include<stdio.h>
void main()
{
    int mark1, mark2, mark3, mark4, mark5, mark6, mark7, mark8, mark9, mark10;
    float sum, avg;

    printf("Enter the mark for student 1: ");
    scanf("%d",&mark1);
    printf("Enter the mark for student 2: ");
    scanf("%d",&mark2);
    printf("Enter the mark for student 3: ");
    scanf("%d",&mark3);
    printf("Enter the mark for student 4: ");
    scanf("%d",&mark4);
    printf("Enter the mark for student 5: ");
    scanf("%d",&mark5);
    printf("Enter the mark for student 6: ");
    scanf("%d",&mark6);
    printf("Enter the mark for student 7: ");
    scanf("%d",&mark7);
    printf("Enter the mark for student 8: ");
    scanf("%d",&mark8);
    printf("Enter the mark for student 9: ");
    scanf("%d",&mark9);
    printf("Enter the mark for student 10: ");
    scanf("%d",&mark10);

    sum = mark1 + mark2 + mark3 + mark4 + mark5 + mark6 + mark7 + mark8 + mark9 + mark10;
    avg = sum / 10;

    printf("\nThe average mark is %.2f\n\n",avg);
}
