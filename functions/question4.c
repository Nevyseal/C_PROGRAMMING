 #include<stdio.h>
float area_triangle(float base, float height); //function prototype
void main( )
{
	float area, bas, heigh;

	printf("Enter the base and height of the triangle: ");
	scanf("%f  %f",&bas,&heigh);

	area = area_triangle(bas,heigh); //function call (R.H.S)

	printf("\nThe area of the rightangle triangle is %.2f\n\n",area);
}
float area_triangle(float base, float height) //function header/heading //formal parameters
{
	float area;
	area = 0.5 * base * height;
	return (area);

}
