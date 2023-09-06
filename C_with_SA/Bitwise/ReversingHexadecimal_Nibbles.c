/*
Reversing a hexadecimal number using two method

- Bitwise operations
- pointers
    - using shift
    - using swap

*/
#include <stdio.h>

typedef unsigned char uint8;

void main(){
	uint8 num;
	uint8 reversed = 0;
	scanf("%x", &num);


	for(int i = 0; i < 2; i++){
		reversed |= (((num >> (4-(i*4) )) & 15) << i*4);
	}

	printf("Reversed: %x\n", reversed);
}