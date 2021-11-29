#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myinput;
    printf("Enter a Number:");
    scanf("%d",&myinput);

    if(myinput < 0)
        printf("NEGATIVE");
    else if (myinput >= 0)
        printf("POSITIVE");

}
