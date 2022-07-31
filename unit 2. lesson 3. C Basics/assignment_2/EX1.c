/*
 ============================================================================
 Name        : mmmmmmmm.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int main()
{
	int the_number;
    printf("Enter an integer you want to check : ");
    fflush(stdout);
    scanf("%d",&the_number);
    if( (the_number% 2) == 0 )
    	printf("%d is even ",the_number);
    else
    	printf("%d is odd ",the_number);
    return 0;
}
