#include <stdio.h>

void main()
{
    // i) intialize with values with 20
    int numbers[5] = {20, 20, 20, 20, 20};

    // ii) add 5 to marks
    int new_marks[30], marks[30];
    for (int i = 0; i < 30; i++)
    {
        new_marks[i] = marks[i] + 5;
    }

    // iii) print array values
    int values[20];
    for (int i = 0; i < 20; i++)
    {
        printf("\n%d", values[i]);
    }

    // iv)
    float scores[15];
    for (int i = 0; i <= 15; i++)
    {
        printf("Enter scores %d: ", i + 1);
        scanf("%f", &scores[i]);
    }
}
