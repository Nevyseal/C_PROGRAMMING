#include <stdio.h>
#include <math.h>

int main()
{
    double sum = 0;
    int count = 1;

    while (count <= 15)
    {
        double square = pow(count, 2);
        sum += square;
        count++;
    }

    printf("\n The sum is: %.2f\n\n", sum);

    return 0;
}
