#include<stdio.h>
float get_sum(float x, float y, float z);
float get_prod(float x, float y, float z);
void main( )
{
	float a,b,c,total,prod;

	printf("Enter three numbers: ");
	scanf("%f  %f  %f",&a,&b,&c);

	total = get_sum(a,b,c);
	prod = get_prod(a,b,c);

	printf("\n%.1f  +  %.1f  +  %.1f  =  %.1f",a,b,c,total);
	printf("\n%.1f  *  %.1f  *  %.1f =  %.1f\n\n",a,b,c,prod);
}
float get_sum(float x,float y,float z)
{
	float sum;
	sum = x + y + z;
	return(sum);
}
float get_prod(float x, float y, float z)
{
	float product;
	product = x * y * z;
	return(product);
}
