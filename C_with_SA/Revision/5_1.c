// Write a code to detect if the processor is big endian or little endian

#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;



void main(){
	
	uint16 indicator = 0x1234;
	
	uint8 *p = &indicator;
	
	printf("Pointer: %x\n", *p);  
	
	if(*p == 0x34){
		printf("Little indian");
	}
	else{
		printf("Big indian");
	} 
}	
