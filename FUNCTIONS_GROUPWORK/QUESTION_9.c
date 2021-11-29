#include <stdio.h>
int main()
{
    int number;
    printf("\nThe sum of numbers between 20 and 70 is %d\n\n", calculate_total());
}
int calculate_total()
{
    int number, sum = 0;
    for (number = 20; number <= 70; number++)
    {
        sum = sum + number;
    }
    return sum;
}

