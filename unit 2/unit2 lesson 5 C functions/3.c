#include "stdio.h"
#include "string.h"
void reverse_sentence(char reverse[], int length);
int main()
{
    char sentence[50] ;
    printf("Enter a sentence : ");
    fflush(stdout);
    gets(sentence);
    reverse_sentence( sentence, strlen(sentence)-1 );
    return 0;
}
void reverse_sentence(char reverse[],int length)
{
	if( length == -1)
		return;
	printf("%c",reverse[length]);
	fflush(stdout);
	reverse_sentence( reverse, length-1);
}
