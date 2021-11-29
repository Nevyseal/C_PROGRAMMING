#include <stdio.h>
#include <math.h>

int main()
{

    double sum = 0;

    for (int i = 0; i <= 15; i++)
    {
        double square = pow(i, 2);
        sum += square;
    }

    printf("\n The sum is: %.2f\n\n", sum);

    return 0;
}
