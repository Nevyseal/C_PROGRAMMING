#include <stdio.h>
#include <math.h>

void main()
{
    printf("\n\t\tNumber\tSquare\tCube");

    for (int num = 2; num <= 10; num++)
    {
        int square = pow(num, 2);
        int cube = pow(num, 3);

        printf("\n\t\t%d\t%d\t%d", num, square, cube);
    }

    printf("\n\n");
}
