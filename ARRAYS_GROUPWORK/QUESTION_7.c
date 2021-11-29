#include <stdio.h>

void main()
{

    int i;
    float test[5] = {3.5, 6.8, 8.8, 5.3, 1.1};
    float new_test[10];


    for (i = 0; i < 5; i++)
    {
        new_test[i] = test[i] + 2.0;
    }


    for (i = 0; i < 5; i++)
    {
        printf("\nNew value of %.2f is %.2f", test[i], new_test[i]);
    }

    printf("\n\n");
}
