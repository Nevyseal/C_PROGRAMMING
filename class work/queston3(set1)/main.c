#include<stdio.h>
#include<conio.h>
void main( )
{
	float netpay1,netpay2,netpay3,netpay4,netpay5,grosspay,grosstax,tax1,tax2,tax3,tax4;

	printf ("Enter the Gross pay: ");
	scanf ("%f" , &grosspay);

	tax1 = (grosspay*30)/100;
	tax2 = (grosspay*25)/100;
	tax3 = (grosspay*15)/100;
	tax4 =(grosspay*10)/100;


	netpay1=grosspay-tax1;
	netpay2=grosspay-tax2;
	netpay3=grosspay-tax3;
	netpay4=grosspay-tax4;
	netpay5=grosspay;


	if ((grosspay >= 40000) && (grosspay >= 40000))
		printf("\n\nThe Net pay is:%f",netpay1);
	else if ((grosspay >= 30000) && (grosspay < 40000 ))
		printf("\n\nThe Net pay is:%f",netpay2);
	else if ((grosspay >= 20000) && (grosspay < 30000))
		printf("\n\nThe net pay is;%f",netpay3);
	else if ((grosspay >= 10000) && (grosspay < 20000))
		printf("\n\nThe net pays is:%f",netpay4);
         else if ((grosspay >= 0) && (grosspay < 10000))
		printf("\n\nThe net pays is:%f",netpay5);



	printf ("\n\n");
	getch();
}
