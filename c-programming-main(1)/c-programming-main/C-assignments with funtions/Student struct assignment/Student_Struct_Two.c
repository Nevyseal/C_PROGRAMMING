#include <stdio.h>
#include <stdlib.h>
const float FEE_PAYABLE = 90000;

void student_input(char adm_no[20], char nm[20], int units, float fePaid, float feBal);
void student_output(char adm_no[20], char nm[20], int units, float fePaid, float feBal);

struct Student
{
	char adm_no[20], name[20];
	int no_of_units;
	float fee_paid, fee_balance;
};

void main()
{
	struct Student stud1, stud2;

	student_input(stud1.adm_no, stud1.name, stud1.no_of_units, stud1.fee_paid, stud1.fee_balance);
	student_input(stud2.adm_no, stud2.name, stud2.no_of_units, stud2.fee_paid, stud2.fee_balance);

	system("cls");

	student_output(stud1.adm_no, stud1.name, stud1.no_of_units, stud1.fee_paid, stud1.fee_balance);
	student_output(stud2.adm_no, stud2.name, stud2.no_of_units, stud2.fee_paid, stud2.fee_balance);
}

void student_input(char adm_no[20], char nm[20], int units, float fePaid, float feBal)
{
	printf("Data input for student:\n");
	printf("-------------------------------------------------\n");
	printf("Enter the student's admission no: ");
	scanf("%s", adm_no);
	printf("Enter his/her name: ");
	scanf("%s", nm);
	printf("Enter the number of units he/she is doing: ");
	scanf("%d", &units);
	printf("Enter the fee he/she has paid: ");
	scanf("%f", &feBal);
}
void student_output(char adm_no[20], char nm[20], int units, float fePaid, float feBal)
{
	feBal = FEE_PAYABLE - fePaid;

	printf("\n\nData analysis for student:\n");
	printf("-------------------------------------------------\n");
	printf("Admission Number 	: %s\n", adm_no);
	printf("Name			: %s\n", nm);
	printf("No of Units		: %d\n", units);
	printf("Fee Paid		: %.2f\n", fePaid);
	printf("Fee Balance		: %.2f\n\n", feBal);
}
