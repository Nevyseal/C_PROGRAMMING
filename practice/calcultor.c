#include<stdio.h>

void main()
{
    float number_one,number_two,answer;
    int myinput;
    printf("1)Addition");
    printf("\n2)Subtraction");
    printf("\n3)Division");
    printf("\n4)Multiplication");

    printf("\n\nEnter the first number :");
    scanf("%f",&number_one);
    printf("\n\nEnter the second number :");
    scanf("%f",&number_two);
    printf("\n\nEnter your choice :");
    scanf("%d",&myinput);

    switch(myinput)
    {
        case 1 :
        answer = number_one + number_two;
        printf("%f + %f = %f",number_one,number_two,answer);
        break;

        case 2 :
        answer = number_one - number_two;
        printf("%f - %f = %f",number_one,number_two,answer);
        break;

        case 3 :
        answer = number_one / number_two;
        printf("%f / %f = %f",number_one,number_two,answer);
        break;

        case 4 :
        answer = number_one * number_two;
        printf("%f * %f = %f",number_one,number_two,answer);
        break;




    }


}