#include<stdio.h>
struct Employee
{
    float earning,tax,Netpay;
    char gender;

};
void main()
{
    struct Employee emp1;
    printf("Enter the gender (m/f) :");
    scanf("%s",&emp1.gender);

    printf("\nEnter the employee's salary: ");
    scanf("%f",&emp1.earning);

    if( (emp1.earning < 15000) || (emp1.gender == ))
    {
        emp1.tax = 12.0/100 * emp1.earning;
        emp1.Netpay = emp1.earning - emp1.tax ;

    }else if((emp1.earning >= 15000) || (emp1.gender == "f"))
    {
        emp1.tax =14.0/100 * emp1.earning;
        emp1.Netpay = emp1.earning - emp1.tax;

    }else if((emp1.earning < 14000) || (emp1.gender == "m"))
    {
        emp1.tax = 13.0/100 * emp1.earning;
        emp1.Netpay = emp1.earning - emp1.tax;

    }else if ((emp1.earning >= 14000) && (emp1.gender == "m"))
    {
        emp1.tax = 15.0/100 * emp1.earning;
        emp1.Netpay = emp1.earning - emp1.tax;
    }
    printf("\n\nThe Net Pay is %.2f",emp1.Netpay);
    printf("\n\n");
}
