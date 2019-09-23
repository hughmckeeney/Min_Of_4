
//Written by Hugh Mc Keeney 


//calculating the minimum of 4 integers by using a defined a min function

#include <stdio.h>
#include <stdlib.h>

#define min(a,b) (((a) + (b) - abs((a) - (b))) * 0.5)

int main(void)
{
	int a,b;
	int minimum, minimum2,total_minimum;
	
	printf("Insert four integers\n");
	scanf("%d", &a);
	scanf("%d", &b);
	
	minimum = min(a,b);
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	minimum2 = min(a,b);
	
	total_minimum = min(minimum, minimum2);
	
	
	printf("The smallest integer is %d\n", total_minimum);
	
	return 0;
}