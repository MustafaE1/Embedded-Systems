#include "stdio.h"
int main() {
	int value;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf("%d",&value);
	printf("you entered: %d",value);
	return 0;
}
