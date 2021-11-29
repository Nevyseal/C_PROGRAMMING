#include <stdio.h>

void main()
{
    int num = 2; // Initializer
    
    printf("\n\t\tNumber\tSquare\tCube");

    do{
        printf("\n\t\t%d\t%d\t%d", num, num * num, num * num * num);
        num++;
    }
    while(num <= 10);

    printf("\n\n");
}
