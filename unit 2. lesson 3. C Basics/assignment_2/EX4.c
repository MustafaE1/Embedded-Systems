/*
 ============================================================================
 Name        : 1111.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "stdio.h"
int main()
{
	float num;
    printf("Enter an integer you want to check : ");
    fflush(stdout);
    scanf("%f",&num);
    if( num > 0 )
    	printf("%f is positive ",num);
    else if(num == 0)
    	printf("You entered zero");
    else
    	printf("%f is negative ",num);
    return 0;
}
