#include <stdio.h>
#include <stdlib.h>

struct Students
{
    char fname[20], grade;
    float avg_mark;
};

char get_grade(int i);
struct Students stud[40];

int main()
{
    int i, numbers;

    printf("\nEnter number of Students: ");
    scanf("%d", &numbers);

    for (i = 0; i < numbers; ++i)
    {
        printf("\n\tEnter name of student %d: ", i + 1);
        scanf("%s", stud[i].fname);
        printf("\tEnter average marks of student %d: ", i + 1);
        scanf("%f", &stud[i].avg_mark);
    }
    system("cls");

    for (i = 0; i < numbers; ++i)
    {
        if (i == 0)
        {
            printf("\n\tFIRST NAME\t\tGRADE");
            printf("\n\t----------\t\t-----");
        }


        printf("\n\t%s\t\t\t%c", stud[i].fname, get_grade(i));
    }
    return 0;
}

char get_grade(int i)
{
    char grade;

    // check student grade
    if (stud[i].avg_mark >= 80 && stud[i].avg_mark < 100)
        grade = 'A';
    else if (stud[i].avg_mark >= 70 && stud[i].avg_mark < 80)
        grade = 'B';
    else if (stud[i].avg_mark >= 60 && stud[i].avg_mark < 70)
        grade = 'C';
    else if (stud[i].avg_mark >= 50 && stud[i].avg_mark < 60)
        grade = 'D';
    else if (stud[i].avg_mark >= 0 && stud[i].avg_mark < 50)
        grade = 'E';

    return grade;
}
