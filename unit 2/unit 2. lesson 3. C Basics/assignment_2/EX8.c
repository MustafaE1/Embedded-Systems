/*
 ============================================================================
 Name        : 8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "stdio.h"
int main()
{
   char operator;
   float operand1,operand2;
   printf("Enter operator either + or - or * or divide : ");
   fflush(stdout);
   scanf("%c",&operator);
   printf("Enter two operands : ");
   fflush(stdout);
   scanf("%f %f",&operand1,&operand2);
   switch(operator)
   {
   case '+':
	   printf("%f + %f = %.2f", operand1 , operand2 , operand1 + operand2 );
       break;
   case '-':
	   printf("%f - %f = %.2f", operand1 , operand2 , operand1 - operand2 );
       break;
   case '*':
	   printf("%f * %f = %.2f", operand1 , operand2, operand1 * operand2 );
       break;
   case '/':
	   printf("%f / %f = %.2f", operand1 ,operand2 , operand1 / operand2 );
       break;
   default:
	   printf("Wrong operator");
       break;
   }
   return 0;
}
