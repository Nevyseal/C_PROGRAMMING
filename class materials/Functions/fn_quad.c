#include<stdio.h>
#include<math.h>
void complex(float h, float j, float k, float m);
void equal (float h, float j, float k, float m);
void distinct (float h, float j, float k, float m);
void main( )
{
	float a, b, c, d;

	printf("\nEnter the coefficients of a, b, c: ");
	scanf ("%f  %f  %f",&a, &b, &c);

	d = b * b - 4 * a * c;

	if (d < 0)
		complex(a,b,c,d);
	else if (d == 0) 
		equal (a,b,c,d); 
	else 	
		distinct(a,b,c,d); 
} 
void complex(float h, float j, float k, float m) 
{ 
	m = -m; 
	printf("\nThe roots are %5.2f + %5.2f i and %5.2f - %5.2f i",-j/(2*h), sqrt(m)/(2*h),-j/(2*h), sqrt(m)/(2*h)); 
} 
void equal (float h, float j, float k, float m) 
{ 
	printf("\nThe roots are equal"); 
	printf("\nThe root is %5.2f",-j/(2*h)); 
} 
void distinct (float h, float j, float k, float m) 
{ 
	printf ("\nThe roots are %f and %f",(-j+sqrt(m))/(2*h),(-j-sqrt(m))/(2*h)); 
}
