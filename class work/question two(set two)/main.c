#include<stdio.h>

int main()
{
int myinput,price,price2,price3 ,price4, salary1, salary2, salary3 , netsalary1,netsalary2,netsalary3;

    printf("\n***Jamal and Daughters pub***");

    printf("\n\nSalary               Tax(percent)");

    printf("\na)>=20000             15%");

    printf("\nb)10000-20000          10%");

    printf("\nc)0-10000           Not Taxed");



printf("\n\nWhich option will you choose:\n");

scanf("%c", &myinput);

switch (myinput)
{
case 'a':
printf("Enter your salary:\n");
scanf("%d",&price);
salary1=(price*15)/100;
netsalary1=price-salary1;

printf("\nThe Gross tax is:%d",salary1);
printf("\n\nThe Net Salary is:%d",netsalary1);

if(salary1) {
        price=myinput*salary1;

}
break;
case 'b':
{
printf("Enter you Salary:\n");
scanf("%d",&salary2);
price2=(salary2*10)/100;
netsalary2=salary2-price2;

printf("\nThe gross tax is:%d",price2);
printf("\n\nThe Net Salary is:%d",netsalary2);
break;
}
case 'c':
    {


printf("Enter the Salary:\n");
scanf("%d",&salary3);
price3=salary3;
netsalary3=price3;
'/printf("\nThe price is:%d",price3);
printf("\n\nThe Net salary is:%d",netsalary3);

break;


}



}





}

