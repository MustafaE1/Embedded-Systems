/*
 ============================================================================
 Name        : sssssssss.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "stdio.h"
int main()
{
	float a,b;
    printf("Enter value of a :");
    fflush(stdout);
    scanf("%f",&a);
    printf("Enter value of b :");
    fflush(stdout);
    scanf("%f",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping, value of a = %f\n",a);
    printf("After swapping, value of b = %f",b);
    return 0;
}
