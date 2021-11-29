#include <stdio.h>
#include <stdlib.h>

float average_calculation(int s1, int s2, int s3, int s4, int s5);

int main()
{
	float sum, subject1, subject2, subject3, subject4, subject5;

	// input
	printf("\nEnter marks:\n");
	scanf("%f %f %f %f %f", &subject1, &subject2, &subject3, &subject4, &subject5);

	float average = average_calculation(subject1, subject2, subject3, subject4, subject5);

	if ((average >= 75) && (average <= 100))
		printf("\n\tDistinction.\n");

	else if ((average >= 65) && (average < 75))
		printf("\n\tCredit.\n");

	else if ((average >= 50) && (average < 65))
		printf("\n\tPass.\n");

	else if ((average >= 0) && (average < 50))
		printf("\n\tFail.\n");

	return 0;
}
float average_calculation(int s1, int s2, int s3, int s4, int s5)
{
	int sum = s1 + s2 + s3 + s4 + s5;
	return sum / 5.0;
}
