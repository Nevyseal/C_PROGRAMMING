#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,root1,root2;
    printf("Enter value of A :");
    scanf("%f",&a);
    printf("\nEnter value of B :");
    scanf("%f",&b);
    printf("\nEnter value of C :");
    scanf("%f",&c);

    root1 =(-b + sqrt((b * b )- (4 * a * c)))/(2 * a);
    root2 = (-b - sqrt((b * b) - (4 * a * c)))/(2 * a);

    printf("\n\nThe first root is :%.3f",root1);
    printf("\n\nThe Second root is : %.3f",root2);
}