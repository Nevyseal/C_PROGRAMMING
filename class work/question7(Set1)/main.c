#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n1) Area and Perimeter of Rectangle");
    printf("\n\n2)Area and Perimeter of a circle\n\n");

    int myinput,area,perimeter,length,width,radius,circumfrence,area2;

    printf("Which figure do you want to calculate area and perimeter:");
    scanf("%c",&myinput);

    switch(myinput){

case '1':
    printf("\n\nEnter The length and width:");
    scanf("%d %d",&length,&width);
    area=length*width;
    perimeter=(length+width)*2;
    printf("\n\nThe Area is :%d",area);
    printf("\n\nThe perimeter is:%d",perimeter);
    break;



case '2':
    printf("\n\nEnter The Radius:");
    scanf("%d",&radius);
    area2=3.142*radius*radius;
   circumfrence=3.142*(radius+radius);
    printf("\n\nThe Area is :%d",area2);
    printf("\n\nThe circumfrence is:%d",circumfrence);
    break;


}



}
