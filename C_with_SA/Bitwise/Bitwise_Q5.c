#include <stdio.h>

typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

typedef signed long int32;
typedef signed short int16;
typedef signed char int8;

void main(){
	// num = 0b 0011 0011 ==> 1111 0011
	uint8 num;
	scanf("%d", &num);
	
	// shift 3 	to the last bits 0000 0011 => 1100 0000
	num = num | (3<<6);
		
	printf("%d", num);
	
}