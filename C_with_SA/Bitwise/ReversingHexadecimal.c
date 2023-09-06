/*
Reversing a hexadecimal number using two method

- Bitwise operations
- pointers
    - using shift
    - using swap

*/
#include <stdio.h>

typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

typedef signed long int32;
typedef signed short int16;
typedef signed char int8;


void main(){
	uint8 num;
	scanf("%x", &num);

	printf("In hex: %x\n", num);
	printf("In dec: %d", num);
}