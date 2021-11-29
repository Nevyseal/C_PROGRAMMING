#include<stdio.h>
void main()
{
	int h;
	for(h = 10000;h >= 5;h = h / 5)
		printf("\nh = %d",h);

	printf("\n\n");
}