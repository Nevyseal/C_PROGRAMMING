#include<stdio.h>
struct grading
{
    float score1,score2,score3,score4,score5,avrage;
};
void main()
{
    struct grading myinput;

    printf("Enter the Grades of Five subjects :");
    scanf("%f %f %f %f %f",&myinput.score1,&myinput.score2,&myinput.score3,&myinput.score4,&myinput.score5);

    myinput.avrage = (myinput.score1 + myinput.score2 + myinput.score3 + myinput.score4 + myinput.score5)/5;

    if((myinput.avrage >=75) && (myinput.avrage<100))
    printf("\n\nDISTINCTION");

   else if((myinput.avrage>=65) && (myinput.avrage< 75))
    printf("\n\nCREDIT");

   else if ((myinput.avrage>=50) && (myinput.avrage<65))
    printf("\n\nPASS");

   else if((myinput.avrage>=0) && (myinput.avrage<50))
    printf("\n\nFAIL");

    printf("\n\n");


}
