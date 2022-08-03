#include "stdio.h"
int check[] = {2,3,4,5,6,7,8,9};
int prime[] = {2,3,5,7};
void calc_prime_in_interval(int min,int max);
int main()
{
    int min_value,max_value;
    printf("Enter two numbers(intervals) : ");
    fflush(stdout);
    scanf("%d %d",&min_value,&max_value);
    printf("Prime numbers between %d and %d are : ",min_value,max_value);
    calc_prime_in_interval(min_value,max_value);
    return 0;
}
void calc_prime_in_interval(int min,int max)
{
    int i,j;
    int interval = (max - min);
    if( max == 1)
    {
    	printf("No prime numbers in this range ");
    	return;
    }
	for( i = 0 ; (min<=9) && (i<interval) ; i++)
	{
		if( min <= prime[i] )
		{
			printf("%d  ",prime[i]);
			min = prime[i] +1;
		}
		if( prime[i] == 7 )
			min = 10;
	}
	for( i = 0 ; i < (max - min)  ; i++)
	{
		for( j = 0 ; j <  8 ; j++)
		{
			if( (min+i) % check[j] == 0)
				break;
		}
		if( j == 8 )
			printf("%d  ",min+i);
	}
}
