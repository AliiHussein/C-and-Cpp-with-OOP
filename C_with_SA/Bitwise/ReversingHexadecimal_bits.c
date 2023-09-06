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
	scanf("%d", &num);


	for(int i = 0; i < 8; i++){
		reversed |= (((num >> 7-i) & 1) << i);
	}

	printf("Reversed: %d\n", reversed);
}