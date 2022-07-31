#include "stdio.h"
int main()
{
	int i , N , Location , Element;
	printf("Enter no of elements: ");
	fflush(stdout);
	scanf("%d",&N);
	int array[N];
	int inserted_array[N+1];
	for(i=0 ; i<N ; i++)
	{
		printf("Enter element no.%d: ",i+1);
		fflush(stdout);
		scanf("%d",&array[i]);
	}
	for (i=0 ; i<N ; i++)
		printf("%d\t",array[i]);
	printf("\nEnter the element to be inserted: ");
	fflush(stdout);
	scanf("%d",&Element);
	printf("Enter the Location: ");
	fflush(stdout);
	scanf("%d",&Location);
	for(i=0 ; i<N+1 ; i++)
	{
		if(i<Location-1)
			inserted_array[i] = array[i];
		else if (i == Location-1)
			inserted_array[i] = Element;
		else
			inserted_array[i] = array[i-1];
	}
	for (i=0 ; i<N+1 ; i++)
			printf("%d\t",inserted_array[i]);
	return 0 ;
}
