#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float number, cube, square, squareRoot, cuberoot;

    // Input
    printf("\nEnter number: ");
    scanf("%f", &number);

    // Computation
    square = pow(number, 2);
    cube = pow(number, 3);
    squareRoot = sqrt(number);
    cuberoot = cbrt(number);

    // Output
    printf("\n\tSquare = %.f", square);
    printf("\n\tCube = %.f", cube);
    printf("\n\tSquareroot = %.2f", squareRoot);
    printf("\n\tCuberoot = %.2f\n\n", cuberoot);

    return 0;
}
