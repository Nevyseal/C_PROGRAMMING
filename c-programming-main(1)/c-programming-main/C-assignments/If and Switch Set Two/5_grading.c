#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum, subject1, subject2, subject3, subject4, subject5;

    // input
    printf("\nEnter marks:\n");
    scanf("%f %f %f %f %f", &subject1, &subject2, &subject3, &subject4, &subject5);

    // Computation
    sum = subject1 + subject2 + subject3 + subject4 + subject5;
    float average =  sum / 5.0;

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
