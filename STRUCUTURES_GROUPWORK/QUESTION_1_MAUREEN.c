#include <stdio.h>
#include <stdlib.h>
struct students
{
    char fname[20], grade;
    float avg_mark;
};
void main()
{
    struct students stud[60];
    int k,number;

    printf("Enter the number of student you want to work with :");
    scanf("%d",&number);

    for (k = 1; k <= number; k++)
    {
        printf ("\nEnter the name of the student %d: ",k);
        scanf ("%s", &stud[k].fname);
        printf ("\nEnter the average mark of the student %d: ",k);
        scanf ("%f", &stud[k].avg_mark);
    }
    system("cls");


        printf ("\n\tNAME\t\tAVG MARK\t\tGRADE");

        for (k =1; k <= number; k++)
        {
            if (stud[k].avg_mark >= 80 && stud[k].avg_mark <= 100)
                printf ("\n\t%s\t\t%f\t\tA", stud[k].fname, stud[k].avg_mark);

            else if (stud[k].avg_mark >= 70 && stud[k].avg_mark <= 80)
                printf ("\n\t%s\t\t%f\t\tB", stud[k].fname, stud[k].avg_mark);

            else if (stud[k].avg_mark >= 60 && stud[k].avg_mark <= 70)
                 printf ("\n\t%s\t\t%f\t\tC", stud[k].fname, stud[k].avg_mark);

            else if (stud[k].avg_mark >= 50 && stud[k].avg_mark <= 60)
                 printf ("\n\t%s\t\t%f\t\tD", stud[k].fname, stud[k].avg_mark);

            else if (stud[k].avg_mark < 50)
                printf ("\n\t%s\t\t%f\t\tE", stud[k].fname, stud[k].avg_mark);
        }

    printf("\n\n");
}
