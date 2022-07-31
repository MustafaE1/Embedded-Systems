#include "stdio.h"
#include "string.h"
int main()
{
	char statment[1000];
	int i ;
	printf("Enter a string: ");
	fflush(stdout);
	gets(statment);
	for (i=0 ; statment[i]!=0 ;i++);
	printf("Length of string: %d",i);
	return 0 ;
}
