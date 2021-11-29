#include <stdio.h>

void main()
{
  char operator;
  double num1, num2;

  // input
  printf("Enter an operator: ");
  scanf("%c", &operator);

  printf("Enter two numbers: ");
  scanf("%lf %lf", &num1, &num2);

  // computation
  if(operator == '+')
    printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);

  else if(operator == '-')
    printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);

  else if(operator == '*')
    printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
  
  else if(operator == '/')
    printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
  
  else
    printf("Invalid operator");

}
