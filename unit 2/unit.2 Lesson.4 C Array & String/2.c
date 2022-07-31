#include "stdio.h"
int main()
{
	int n,i;
	float sum ;
	printf("Enter the numbers of data: ");
	fflush(stdout);
	scanf("%d",&n);
	float numbers[n];
	for(i=0 , sum =0.0 ; i < n ;i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdout);
		scanf("%f",&numbers[i]);
		sum+= numbers[i];
	}
	printf("Average = %f ",sum/n);
	return 0 ;
}
