#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    if(age>18)
        printf("You can vote"); else printf("You are too young to vote");

    return 0;
}
