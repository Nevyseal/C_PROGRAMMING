#include <stdio.h>
#include <stdlib.h>

struct weight
{
    float gram, package, kilogram;
};
int main()
{
    struct weight w_1;

    // Input
    printf("\nEnter weight in grams: ");
    scanf("%f", &w_1.gram);

    // Conversion
    w_1.kilogram = w_1.gram / 1000.0;
    w_1.package = 1.0 / w_1.kilogram;

    // Output
    printf("\n\tThe weight of the package is %.1f kilograms.\n", w_1.kilogram);
    printf("\nIt takes %d such packages to form one kilogram.\n\n", w_1.package);
    return 0;
}
