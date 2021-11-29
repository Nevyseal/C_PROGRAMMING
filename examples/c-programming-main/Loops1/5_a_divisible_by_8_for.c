#include <stdio.h>

void main()
{
    printf("\n\tNumber Divisible by 8");

    for (int num = 1; num <= 200; num++)
    {
        if (num % 8 == 0)
        {
            printf("\n\t %d", num);
        }
    }
}
