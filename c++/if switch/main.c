#include<stdio.h>

int main()
{
int myinput,price,price2,price3 ,price4, Tusker=100, Plisner=120, Smirnoff=140 , Whitecap=90;

    printf("\n***Jamal and Daughters pub***");

    printf("\n\nBeer brand           price");

    printf("\na)Tusker              100/=");

    printf("\nb)Plisner             120/=");

    printf("\nc)Smirnoff ice        140/=");

    printf("\nd)White cap           90/=");

printf("\n\nWhich option will you choose:\n");

scanf("%c", &myinput);

switch (myinput)
{
case 'a':
printf("How many bottles of Tusker do you need:\n");
scanf("%d",&price);
Tusker=price*100;
printf("\nThe price is:%d",Tusker);

if(Tusker) {
        price=myinput*Tusker;

}
break;
case 'b':
{
printf("How many bottles of Plisner do you need:\n");
scanf("%d",&Plisner);
price2=Plisner*120;
printf("\nThe price is:%d",price2);
break;
}
case 'c':
    {


printf("How many bottles of Smirnoff do you need:\n");
scanf("%d",&Smirnoff);
price3=Smirnoff*140;
printf("\nThe price is:%d",price3);

break;


}

case 'd':
    {


printf("How many bottles of White cap do you need:\n");
scanf("%d",&Whitecap);
price4=Whitecap*90;
printf("\nThe price is:%d",price4);

break;


}





}
}
