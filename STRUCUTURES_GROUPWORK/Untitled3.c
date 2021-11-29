#include <stdio.h>

struct Details
{
    char adm_no[20];
    char name[20];
    int age;
    float height;
    float fee_balance;
};

void main()
{
    struct Details student;

    // i) assign age value
    student.age = 25;

    // ii) assign name
    printf("Enter a name: ");
    scanf("%s", student.name);

    // iii) increase fee
    student.fee_balance += 12500;

    // iv) print height
    printf("%f", student.height);
}
