#include<stdio.h>
#include<conio.h>
union My_Numbers
{
	int num1;
	float num2;
	char lett;
};
void main( )
{
	union My_Numbers values;

	printf("Enter an integer:  ");
	scanf("%d",&values.num1);
	printf ("The integer you entered was %d",values.num1);

	printf("\n\nEnter a floating point number:  ");
	scanf("%f",&values.num2);
	printf ("The floating point number you entered was %f",values.num2);

	printf("\n\nEnter a character:  ");
	values.lett = getche( );
	printf ("\nThe character you entered was %c\n\n",values.lett);
}
