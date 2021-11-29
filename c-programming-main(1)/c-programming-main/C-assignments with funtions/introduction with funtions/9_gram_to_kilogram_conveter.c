#include <stdio.h>
#include <stdlib.h>
float gram_to_kilogram(float gram);
int packages(float kilogram);

float gram;
void main()
{
    float kilogram;
    printf("Enter the weight in grams: ");
    scanf("%f", &gram);

    printf("\nThe weight of the package is %.2f kilograms.", gram_to_kilogram(gram));
    printf("\nIt takes %d such packages to form one kilogram.\n\n", packages(gram_to_kilogram(gram)));
}

float gram_to_kilogram(float gram)
{
    float kilogram;
    kilogram = gram / 1000.0;
    return kilogram;
}
int packages(float kilogram)
{
    float packages;
    packages = kilogram / (gram * 1000.0);
    return packages;
}