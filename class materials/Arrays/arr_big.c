#include<stdio.h>
void main( )
{
	int i;
	float  num[10], largest, smallest, sum = 0,average;

	for (i = 0; i < 10; i++)
	{
		printf("Enter number %d:> ",i + 1);
		scanf("%f",&num[i]);
	}

	largest = smallest = num[0];

	for (i = 0; i < 10; i++)
	{
		sum = sum + num[i];
		if (num[i] > largest)
			largest = num[i];
		else if(num[i] < smallest)
			smallest = num[i];
	}
	average = sum/10;

	printf("\n\nThe elements are: \n");
	for (i = 0; i < 10; i++)
		printf("%.2f ",num[i]);

	printf("\n\nThe largest number is %.2f",largest);
	printf("\nThe smallest number is %.2f",smallest);
	printf("\nThe sum is %5.2f and average is %.2f\n\n",sum,average);
}
