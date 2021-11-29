#include<stdio.h>
#include<stdlib.h>
const float FEE_PAYABLE = 90000;
struct Student
{
	char adm_no[20],name[20];
	int no_of_units;
	float fee_paid, fee_balance;
};
void main( )
{
	struct Student stud1, stud2;

	printf("Data input for student 1:\n");
	printf("-------------------------------------------------\n");
	printf("Enter the student's admission no: ");
	scanf("%s",stud1.adm_no);
	printf("Enter his/her name: ");
	scanf("%s",stud1.name);
	printf("Enter the number of units he/she is doing: ");
	scanf("%d", &stud1.no_of_units);
	printf("Enter the fee he/she has paid: ");
	scanf("%f",&stud1.fee_paid);

	printf("\n\nData input for the student 2:\n");
	printf("-------------------------------------------------\n");
	printf("Enter the student's admission no: ");
	scanf("%s",stud2.adm_no);
	printf("Enter his/her name: ");
	scanf("%s",stud2.name);
	printf("Enter the number of units he/she is doing: ");
	scanf("%d", &stud2.no_of_units);
	printf("Enter the fee he/she has paid: ");
	scanf("%f",&stud2.fee_paid);

	stud1.fee_balance = FEE_PAYABLE - stud1.fee_paid;
	stud2.fee_balance = FEE_PAYABLE - stud2.fee_paid;

	system("cls");

	printf("Data analysis for student 1:\n");
	printf("-------------------------------------------------\n");
	printf("Admission Number 	: %s\n", stud1.adm_no);
	printf("Name			: %s\n", stud1.name);
	printf("No of Units		: %d\n", stud1.no_of_units);
	printf("Fee Paid		: %.2f\n",stud1.fee_paid);
	printf("Fee Balance		: %.2f",stud1.fee_balance);

	printf("\n\nData analysis for student 2:\n");
	printf("-------------------------------------------------\n");
	printf("Admission Number 	: %s\n", stud2.adm_no);
	printf("Name			: %s\n", stud2.name);
	printf("No of Units		: %d\n", stud2.no_of_units);
	printf("Fee Paid		: %.2f\n",stud2.fee_paid);
	printf("Fee Balance		: %.2f\n\n",stud2.fee_balance);
}
