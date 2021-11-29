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
	struct Student stud1,stud2;

	printf("Data input for the student for student 1:\n");
	printf("-------------------------------------------------\n");
	printf("Enter the student's admission no: ");
	scanf("%s",stud1.adm_no);
	printf("Enter his/her name: ");
	scanf("%s",stud1.name);
	printf("Enter his/her age: ");
	scanf("%d", &stud1.age);
	printf("Enter his/her height: ");
	scanf("%f",&stud1.height);
	
	printf("\n\nData input for the student for student 2:\n");
	printf("-------------------------------------------------\n");
	printf("Enter the student's admission no: ");
	scanf("%s",stud2.adm_no);
	printf("Enter his/her name: ");
	scanf("%s",stud2.name);
	printf("Enter his/her age: ");
	scanf("%d", &stud2.age);
	printf("Enter his/her height: ");
	scanf("%f",&stud2.height);
	system("cls");

	printf("Data analysis for the student 1:\n");
	printf("-------------------------------------------------\n");
	printf("Admission Number 	: %s\n", stud1.adm_no);
	printf("Name			: %s\n", stud1.name);
	printf("Age			: %d\n", stud1.age);
	printf("Height			: %.2f\n",stud1.height);

	printf("\n\nData analysis for the student 2:\n");
	printf("-------------------------------------------------\n");
	printf("Admission Number 	: %s\n", stud2.adm_no);
	printf("Name			: %s\n", stud2.name);
	printf("Age			: %d\n", stud2.age);
	printf("Height			: %.2f\n\n",stud2.height);
}
