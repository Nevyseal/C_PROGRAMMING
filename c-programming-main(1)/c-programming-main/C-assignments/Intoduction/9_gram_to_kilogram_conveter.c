#include <stdio.h>
#include <stdlib.h>

int main()
{
    double grams;

    // Input
    printf("\nEnter weight in grams: ");
    scanf("%lf", &grams);

    // Conversion
    float kilograms = grams / 1000.0;
    int packages = 1000.0 / grams;

    // Output
    printf("\n\tThe weight of the package is %.1f kilograms.\n", kilograms);

    if (grams >= 1000)
        printf("\n\tIt takes 1 such package to form one kilogram.\n", packages);
    else
        printf("\n\tIt takes %d such packages to form one kilogram.\n", packages);

    return 0;
}
