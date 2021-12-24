#include<stdio.h>
float conversion(float mass);
float conversion_2(float mass);
int  choice;
void main()
{
  float mass1,mass2,input,input2;
  ;
  printf("1)Changing from kg to pounds.");
  printf("\n2)Changing from pounds to kg.");
  printf("\n\nEnter your choice of conversion :");
  scanf("%d",&choice);

  input = conversion(mass1);
  input2= conversion_2(mass2);

  if(choice == 1)
  {
printf("Kg to pounds is :%f",input);
  }else if (choice == 2)
  {
printf("pounds to kg is :%f",input2);
  }
  
  
}
float conversion(float mass)
{
    float conversion,weight,choice;
    
    printf("Enter Mass in KG :");
    scanf("%f",&weight);
    conversion = weight * 2.20462;
    return(conversion);

  
}
float conversion_2(float mass)
{
    if(choice == 2)
    {
    float conversion2,weight;
    printf("Enter Mass in Pounds :");
    scanf("%f",&weight);
    conversion2 = weight /2.20462;
    return(conversion2);
    }
    

}