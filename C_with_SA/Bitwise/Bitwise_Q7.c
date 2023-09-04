#include <stdio.h>

typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

typedef signed long int32;
typedef signed short int16;
typedef signed char int8;

#define READBIT(var, bit) ((var >> bit) & 1)

void main(){
	// x = 0x12345678 -> x will be 0x78563412
	uint32 num = 0x12345678, reversed = 0;
	
	//reversed = (((num >> 8) & 15) << 0) 
	
	for(uint8 i = 0; i <= 24; i += 8 ){
		reversed += (((num >> 24-i) & 255) << i);
	}
	printf("%d", reversed);
}