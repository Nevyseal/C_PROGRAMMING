#include<stdio.h>
int main()
{
    int number_one,number_two,i;
    printf("Enter the first number :");
    scanf("%d",&number_one);
    printf("Enter The Second number :");
    scanf("%d",&number_two);

for(i = 0; i <= NULL;i++)
{
    if(number_one % number_two == 0)
    {
    printf("%d is divisible by %d",number_one,number_two);
    break;
    }
    else
    printf("%d is not divisible by %d",number_one,number_two);
    break;
}

}