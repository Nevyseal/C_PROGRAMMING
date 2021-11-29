#include <stdio.h>

void grade(float average);

int main()
{
    float average;
    float subject_1, subject_2, subject_3;

    printf("\nEnter subjects: ");
    scanf("%f %f %f", &subject_1, &subject_2, &subject_3);

    average = (subject_1 + subject_2 + subject_3) / 3.0;
    grade(average);

    return 0;
}

void grade(float average)
{
    char GRADE;
    if (average >= 80 && average < 100)
        GRADE = 'A';
    else if (average >= 70 && average < 80)
        GRADE = 'B';
    else if (average >= 60 && average < 70)
        GRADE = 'C';
    else if (average >= 50 && average < 60)
        GRADE = 'D';
    else if (average >= 0 && average < 50)
        GRADE = 'E';

    printf("\n\tYour grade is %c\n\n", GRADE);
}
