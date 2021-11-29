#include <stdio.h>
#include <stdlib.h>

struct students
{
    int subject1, subject2, subject3, subject4, subject5;
    int sum;
    float average;
};

int main()
{
    struct students stndt_1;

    // input
    printf("\nEnter marks:\n");
    scanf("%f %f %f %f %f", &stndt_1.subject1, &stndt_1.subject2, &stndt_1.subject3, &stndt_1.subject4, &stndt_1.subject5);

    // Computation
    stndt_1.sum = stndt_1.subject1 + stndt_1.subject2 + stndt_1.subject3 + stndt_1.subject4 + stndt_1.subject5;
    stndt_1.average = stndt_1.sum / 5.0;

    if ((stndt_1.average >= 75) && (stndt_1.average <= 100))
        printf("\n\tDistinction.\n");

    else if ((stndt_1.average >= 65) && (stndt_1.average < 75))
        printf("\n\tCredit.\n");

    else if ((stndt_1.average >= 50) && (stndt_1.average < 65))
        printf("\n\tPass.\n");

    else if ((stndt_1.average >= 0) && (stndt_1.average < 50))
        printf("\n\tFail.\n");

    return 0;
}
