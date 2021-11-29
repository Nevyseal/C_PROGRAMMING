#include <stdio.h>

void main()
{
    int i, number, fail = 0, pass = 0;
    float marks[100], sum = 0, average;
    float highest = 0, lowest = 100;

    printf("\nHow many marks do you want to work with : ");
    scanf("%d", &number);

    for (i = 0; i < number; i++)
    {
        printf("Enter marks %d: ", i + 1);
        scanf("%f", &marks[i]);

        sum = sum + marks[i];

        // Pass or fail
        if (marks[i] >= 50)
            pass++;
        else
            fail++;

        // highest and lowest
        if (highest < marks[i])
            highest = marks[i];

        if (lowest > marks[i])
            lowest = marks[i];
    }

    average = sum / number;

    printf("\n\tThe average marks is %.1f", average);
    printf("\n\tThe highest mark was %.1f", highest);
    printf("\n\tThe lowest mark was %.1f", lowest);
    printf("\n\t%d passed while %d failed\n\n", pass, fail);
}

