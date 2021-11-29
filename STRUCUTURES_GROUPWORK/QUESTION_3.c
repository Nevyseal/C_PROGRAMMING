#include <stdio.h>

struct Employee
{
    char empy_no[10], f_name[20], s_name[20];
    int no_of_kids;
    float height;
    float basic_salary;
};

void main()
{
    // b) emp_1 in structure variable
    struct Employee emp_1;

    // i) access kids
    emp_1.no_of_kids = 4;

    // ii) read height
    printf("Enter height: ");
    printf("%f", &emp_1.height);

    // iii) reduce basic salary
    emp_1.basic_salary -= 1500;

    // iv) print s_name
    printf("%s", emp_1.s_name);
}
