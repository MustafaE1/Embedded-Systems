/*
 ============================================================================
 Name        : 6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "stdio.h"
int main()
{
	int value,i;
	int sum =0;
    printf("Enter an integer : ");
    fflush(stdout);
    scanf("%d",&value);
    for( i=0 ; i<=value ; i++ )
    	sum += i ;
    printf("Sum = %d",sum);
    return 0;
}
