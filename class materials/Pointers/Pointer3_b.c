 #include<stdio.h>
void main( )
{
	int a, *b;

	printf("Enter the value of a:> ");
	scanf("%d", &a);

	b = &a;
	printf("\nThe value entered is %d",a);

	*b = *b + 5;
	printf("\nThe new value is %d",a);

	*b = *b * 2;
	printf("\nThe newest value is %d\n\n",*b);
}
