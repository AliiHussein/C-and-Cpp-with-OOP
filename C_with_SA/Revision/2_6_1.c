#include <stdio.h>

typedef unsigned char uint8;

void main(){
	uint8 num, bit6, bit2;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	bit2 = ((num >> 2) & 1) << 6;
	bit6 = ((num >> 6) & 1) << 2;
	
	num = (num & 0b10111011) | bit2 | bit6;
	
	printf("New number is %d",num );
}