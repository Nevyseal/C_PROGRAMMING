#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
// ready for some fun #FROGYBOY.
{
    int myinput,i,num1,num2,answer,lower = 0,upper = 100;
    printf("*********ACTVISION*********");
    printf("\n***************************");
    printf("\n*****SIMPLE MATHS GAME*****");
    printf("\n***************************");

    printf("\n1)Addition");
    printf("\n2)Subtraction");
    printf("\n3)Multiplication");
    printf("\n4)Division");
    printf("\n5)Exit");

    printf("\n\nEnter your choice :");
    scanf("%d",&myinput);

    switch(myinput)
    {
        case 1 :
        srand(time(NULL));
        num1 = (rand() % (upper + lower + 150)) ;
        num2 = (rand() % (upper + lower + 150)) ;
        printf("\nWhat is %d + %d :",num1,num2);
        scanf("%d",&answer);
        if(answer == num1 + num2)
        printf("\ncorrect");
        else
        printf("\nIncorrect");
        break;

        case 2 :
        srand(time(NULL));
        num1 = (rand() % (upper + lower + 150)) ;
        num2 = (rand() % (upper + lower + 150)) ;
        printf("\nWhat is %d - %d :",num1,num2);
        scanf("%d",&answer);
        if(answer == num1 - num2)
        printf("\ncorrect");
        else
        printf("\nIncorrect");
        break;

        case 3 :
        srand(time(NULL));
        num1 = (rand() % (upper + lower + 150)) ;
        num2 = (rand() % (upper + lower + 150)) ;
        printf("\nWhat is %d * %d :",num1,num2);
        scanf("%d",&answer);
        if(answer == num1 * num2)
        printf("\ncorrect");
        else
        printf("\nIncorrect");
        break;

        case 4 :
        srand(time(NULL));
        num1 = (rand() % (upper + lower + 150)) ;
        num2 = (rand() % (upper + lower + 150)) ;
        printf("\nWhat is %d / %d :",num1,num2);
        scanf("%d",&answer);
        if(answer == num1 / num2)
        printf("\ncorrect");
        else
        printf("\nIncorrect");
        break;

        case 5 :
        return 0;
        break;
        

    }
    // HOPY YOU enjoyed the game #froggyboyy//


}