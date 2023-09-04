#include <stdio.h>

typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

typedef signed long int32;
typedef signed short int16;
typedef signed char int8;


void main(){
	// x = 0x12345678 -> x will be 0x78563412
	//uint8 x = 0b00101000;
	
	uint8 num, read_bit, zeros = 0, ones = 0;
	scanf("%d", &num);
	for(uint8 i = 0; i < 8; i++){
		read_bit = ((num >> i) & 1);
		if(read_bit == 0){
			zeros += 1;
		}
		else{
			ones += 1;
		}
	}
	printf("Zeros= %d, Ones= %d", zeros, ones);
	
}