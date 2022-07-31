#include "stdio.h"
int main()
{
	int i , N , Element;
	printf("Enter no of elements: ");
	fflush(stdout);
	scanf("%d",&N);
	int array[N];
	for(i=0 ; i<N ; i++)
	{
		printf("Enter element no.%d: ",i+1);
		fflush(stdout);
		scanf("%d",&array[i]);
	}
	for (i=0 ; i<N ; i++)
		printf("%d\t",array[i]);
	printf("\nEnter the element to be searched : ");
	fflush(stdout);
	scanf("%d",&Element);
	for (i=0 ; i<N ; i++)
	{
		if (Element==array[i])
			break;
	}
	printf("Number found at the location %d ",i+1);
	return 0 ;
}
