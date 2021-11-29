#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char adm_no[20],name[25];
	float height;
	int age;
}; 
void main( ) 
{
	struct Student stud[50];
	int number, i;
	
	printf("How many students do you want to work with? ");
	scanf("%d", &number);

	system("cls");

	for (i = 0; i < number; i++)
	{
		printf("Enter the admission number for student %d: ", i + 1);
		scanf("%s",stud[i].adm_no);
		printf("Enter his/her name: ");
		scanf("%s",stud[i].name);
		printf("Enter his/her age: ");
		scanf("%d",&stud[i].age);
		printf("Enter his/her height: ");
		scanf("%f",&stud[i].height);
		printf("\n\n");
	}

	system("cls");
	
	for (i = 0; i < number; i++)
	{
		printf("Analyasis for Student %d:",i + 1);
		printf("\n----------------------------------------");
		printf("\nAdm no		: %s",stud[i].adm_no);
		printf("\nName		: %s",stud[i].name);
		printf("\nAge		: %d",stud[i].age);
		printf("\nHeight		: %.2f\n\n",stud[i].height);
	}
}
