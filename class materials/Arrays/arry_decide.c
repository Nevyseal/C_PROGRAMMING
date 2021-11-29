#include<stdio.h>
void main( )
{
	int i,total_number;
	float  num[i], largest, smallest, sum = 0,average;

	printf("How many students do you want to work with? :");
	scanf("%d",&total_number);

	for (i = 0; i < total_number; i++)
	{
		printf("\n\nThe mark for student %d:> ",i + 1);
		scanf("%f",&num[i]);
	}

	largest = smallest = num[0];

	for (i = 0; i < total_number; i++)
	{
		sum = sum + num[i];
		if (num[i] > largest)
			largest = num[i];
		else if(num[i] < smallest)
			smallest = num[i];
	}
	average = sum/total_number;

	printf("\n\nThe marks  are: \n");
	for (i = 0; i < total_number; i++)
		printf("%.2f ",num[i]);

	printf("\n\nThe largest number is %.2f",largest);
	printf("\nThe smallest number is %.2f",smallest);
	printf("\nThe sum is %5.2f and average is %.2f\n\n",sum,average);
}
