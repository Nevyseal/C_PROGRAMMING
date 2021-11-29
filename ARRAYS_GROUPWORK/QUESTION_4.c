
#include <stdio.h>

void main()
{
    int sum = 0, number, Fb[1000], i;

    printf("\nEnter the number of terms: ");
    scanf("%d", &number);

    printf("\nFibonacci sequence is ");

    for (i = 0; i <= number; i++)
    {
        if (i == 0)
            Fb[i] = 0;
        else if (i == 1)
            Fb[i] = 1;
        else
            Fb[i] = Fb[i - 1] + Fb[i - 2];

        printf("%d ", Fb[i]);

        sum = sum + Fb[i];
    }
    printf("\nSum of sequence is %d", sum);
    printf("\n\n");
}
