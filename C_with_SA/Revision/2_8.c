#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned long uint32;

void main(){
	uint32 num = 0b10000011;  
	
	//check
	printf("Num is %d\n", num);
	
	num = (((num>>7) & 1) << 0) | (((num>>6) & 1) << 1) | (((num>>5) & 1) << 2) | (((num>>4) & 1) << 3) | (((num>>3) & 1) << 4) | (((num>>2) & 1) << 5) | (((num>>1) & 1) << 6) | (((num>>0) & 1) << 7);
	
	printf("New number is %d",num );
}