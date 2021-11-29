#include<stdio.h>
#include<stdlib.h> 
struct Student
{
	char adm_no[20],name[20];
	float height;
	int age;
};
void main( ) 
{
	struct Student stud1;

	printf("Data input for the student:\n");
	printf("-------------------------------------------------\n");
	printf("Enter the student's admission no: ");
	scanf("%s",stud1.adm_no);
	printf("Enter his/her name: ");
	scanf("%s",stud1.name);
	printf("Enter his/her age: ");
	scanf("%d", &stud1.age);
	printf("Enter his/her height: ");
	scanf("%f",&stud1.height);
	
	system("cls");

	printf("Data analysis for the student:\n");
	printf("-------------------------------------------------\n");
	printf("Admission Number 	: %s\n", stud1.adm_no);
	printf("Name			: %s\n", stud1.name);
	printf("Age			: %d\n", stud1.age);
	printf("Height			: %.2f\n\n",stud1.height);
}
