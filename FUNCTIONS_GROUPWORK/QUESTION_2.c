#include<stdio.h>
char get_grade(float average);
void main()
{
    float subject_1,subject_2,subject_3,average,aver;
    printf("Enter the marks for three subjects :");
    scanf("%f %f %f",&subject_1,&subject_2,&subject_3);

    average = (subject_1 + subject_2 +subject_3)/3.0;

    aver = get_grade(average);

    printf("\n\nThe Grade is :%c",get_grade(average));




}
char get_grade(float average)
{
    char grade;
    if(average >= 80 && average <=100)
    grade = 'A';
    else if(average >= 70 && average <= 80)
        grade = 'B';
    else if(average >=60 && average <= 70)
        grade = 'C';
    else if(average >= 50 && average <=60)
        grade = 'D';
    else if(average >= 0 && average <=50)
        grade = 'E';
        return grade;
}
