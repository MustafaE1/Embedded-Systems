/*
 ============================================================================
 Name        : nnnnnnnnnn.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "stdio.h"

int main()
{
   char character;
   printf("Enter a character: ");
   fflush(stdout);
   scanf("%c",&character);
   printf("ASCII value of %c = %d",character,character);
   return 0;
}
