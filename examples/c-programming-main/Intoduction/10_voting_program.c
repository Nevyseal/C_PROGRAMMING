#include <stdio.h>
#include <stdlib.h>

int main()
{
    double age;

    // Input
    printf("\nEnter your age: ");
    scanf("%lf", &age);

    // Check age
    if(age < 18.0)
        printf("\n\tYou are too young to vote");

    else
        printf("\n\tYou can vote\n");

    return 0;
}
