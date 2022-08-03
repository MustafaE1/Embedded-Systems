#include "stdio.h"
int calc_power(int base,int power);
int main()
{
    int base,power;
    printf("Enter base number : ");
    fflush(stdout);
    scanf("%d",&base);
    printf("Enter power number(positive integer) : ");
    fflush(stdout);
    scanf("%d",&power);
    printf("%d^%d = %d", base , power, calc_power(base,power) );
    return 0;
}
int calc_power(int base,int power)
{
	if( power == 1)
		return base;
	return base*calc_power(base, power-1);
}
