#include <stdio.h>

void main()
{
    int num = 1;
    printf("\n\tNumber Divisible by 8");

    do
    {

        if (num % 8 == 0)
        {
            printf("\n\t %d", num);
        }

        num++;
    } while (num <= 200);
}
