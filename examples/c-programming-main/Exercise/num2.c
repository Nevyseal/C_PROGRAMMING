#include <stdio.h>

void main()
{
    float i;
    float number, squareroot;

    printf("\nEnter a number: ");
    scanf("%f", &number);

    for(i = 1.0; i * i <= number; i += 0.01);

    printf("%f", i);

}
