#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned long uint32;

void main(){
	uint32 num = 0x12345678;  
							  
	//check
	printf("Num is %x\n", num);
	
	num = (((num>>24) & 0xff) << 0) | (((num>>16) & 0xff) << 8) | (((num>>8) & 0xff) << 16) | (((num>>0) & 0xff) << 24);
	
	printf("New number is %x",num );
}