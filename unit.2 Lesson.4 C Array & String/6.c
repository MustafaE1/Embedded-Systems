#include "stdio.h"
#include "string.h"
int main()
{
	char statment[1000];
	char c ;
	int i , f ;
	printf("Enter a string: ");
	fflush(stdout);
	gets(statment);
	printf("Enter a character to find frequency: ");
	fflush(stdout);
	scanf("%c",&c);
	for (i=0 , f=0 ; i < strlen(statment);i++)
	{
		if(statment[i]==c)
			f++;
	}
	printf("frequency of %c = %d",c,f);
	return 0 ;
}
