#include <stdio.h>
#include <stdlib.h>

struct Organization
{
    int Employee_number;
    char Employee_Surname[10], Employee_Middle_name[10];
    float Basic_salary, Allowances, Net_Salary;
    int tax_rate, gross_salary, tax_amount;
};

float get_net_salary();

void main()
{
    struct Organization employee[1000];
    int i, number;

    printf("Enter number of employees: ");
    scanf("%d", &number);

    for (i = 0; i < number; ++i)
    {
        // input employee details
        printf("Employee %d", i + 1);
        printf("\n\tEnter Employee number: ");
        scanf("%d", &employee[i].Employee_number);
        printf("\tEnter Employee surname: ");
        scanf("%s", employee[i].Employee_Surname);
        printf("\tEnter Employee middle name: ");
        scanf("%s", employee[i].Employee_Middle_name);

        printf("\tEnter Employee basic salary: ");
        scanf("%f", &employee[i].Basic_salary);
        printf("\tEnter Employee Allowances: ");
        scanf("%f", &employee[i].Allowances);

        // find tax rate
        if (employee[i].Basic_salary < 10000)
            employee[i].tax_rate = 5;
        else if (employee[i].Basic_salary >= 10000 && employee[i].Basic_salary <= 20000)
            employee[i].tax_rate = 10;
        else if (employee[i].Basic_salary > 20000)
            employee[i].tax_rate = 15;

        // calculations
        employee[i].gross_salary = employee[i].Basic_salary + employee[i].Allowances;
        employee[i].tax_amount = (employee[i].tax_rate / 100.0) * employee[i].gross_salary;
        employee[i].Net_Salary = employee[i].gross_salary - employee[i].tax_amount;
    }
    system("cls");

    // Print output
    for (i = 0; i < number; ++i)
    {
        printf("\n----------------------------------------------------");
        printf("\n\tEmployee:\t\t%s %s", employee[i].Employee_Surname, employee[i].Employee_Middle_name);
        printf("\n\tEmployee Number:\t%d", employee[i].Employee_number);
        printf("\n\tEmployee Basic salary:\t%6.2f", employee[i].Basic_salary);
        printf("\n\tEmploye eAllowances:\t%6.2f", employee[i].Allowances);
        printf("\n\tEmployee Net salary:\t%6.2f", employee[i].Net_Salary);
    }
    printf("\n\n");
}
