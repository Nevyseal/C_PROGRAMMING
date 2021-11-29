#include<stdio.h>
struct Details
{
    char adm_no[20];
    char name[30];
    int age;
    float height;
    float fee_balance;

};
void main()
{
    struct Details student;

    student.age = 25;

    printf("\nEnter the name of the student :");
    scanf("%s",&student.name);

    printf("\nEnter your Height :");
    scanf("%f",&student.height);

    printf("\nEnter the student fees balance :");
    scanf("%f",&student.fee_balance);

    printf("\nEnter your adm_no :");
    scanf("%s",&student.adm_no);

    student.fee_balance = student.fee_balance + 125000;


    printf("\n\tNAME \t\tAGE  \t\tADM_NO  \t\tHEIGHT  \t\tFEE_BALANCE");
    printf("\n");
    printf("\n\t%s\t\t%d\t\t%s \t\t%f \t\t%f",student.name,student.age,student.adm_no,student.height,student.fee_balance);
    printf("\n\n");

}

