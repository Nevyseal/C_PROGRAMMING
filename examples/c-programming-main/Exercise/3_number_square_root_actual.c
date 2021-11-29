#include <stdio.h>

void main()
{
    float i, number;

    printf("\nEnter a number: ");
    scanf("%f", &number);

    for(i = 0; i <= number; i = i + 0.00001)
    {
        if(i * i >= number)
        {
            printf("\n\nThe squareroot of %.3f is %.3f\n\n", number, i);
            break;
        }
    }
}
