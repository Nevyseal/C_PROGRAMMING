#include <stdio.h>
#include <math.h>

int main()
{
	int salary;
	float taxAmount, netSalary;

	// Input
	printf("\nEnter salary amount: ");
	scanf("%d", &salary);

	// Computation
	if (salary >= 20000)
	{
		taxAmount = salary * 15.0 / 100;
		netSalary = salary - taxAmount;
		printf("\n\tYour tax amount is %.f", taxAmount);
		printf("\n\tYour net Salary is %.f\n", netSalary);
	}
	else if (salary > 10000 && salary < 20000)
	{
		taxAmount = salary * 10.0 / 100;
		netSalary = salary - taxAmount;
		printf("\n\tYour tax amount is %.f", taxAmount);
		printf("\n\tYour net Salary is %.f\n", netSalary);
	}
	else
	{
		printf("\n\tYou are not taxed");
		printf("\n\tYour salary is %d\n", salary);
	}

	return 0;
}
