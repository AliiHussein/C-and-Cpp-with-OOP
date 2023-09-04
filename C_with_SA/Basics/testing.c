#include <stdio.h>

typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

typedef signed long int32;
typedef signed short int16;
typedef signed char int8;

uint8 add(uint8 x, uint8 y);

void main(){
	uint8 a, b , c;
	a = 1;
	b = 2;
	c = add(a, b);
	printf("The sum is: %d", c);
	
}

uint8 add(uint8 x, uint8 y){
	uint8 sum;
	sum = x + y;
	return sum;
	
}