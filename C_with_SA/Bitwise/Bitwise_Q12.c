#include <stdio.h>

typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

typedef signed long int32;
typedef signed short int16;
typedef signed char int8;


void main(){
	uint8 num, read_bit;
	scanf("%d", &num);
	
	read_bit = num & 1;
	if(read_bit == 0){
		printf("Number is even");
	}
	else{
		printf("Number is odd");
	}
}