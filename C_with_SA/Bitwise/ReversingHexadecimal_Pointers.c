/*
Reversing a hexadecimal number using two method

- Bitwise operations
- pointers
    - using shift
    - using swap

*/
#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;

void main(){
	uint16 num;
	uint16 reversed;
	scanf("%x", &num);

	uint8 *p = &num;

	reversed = (*(p) << 8) | *(p+1);


	printf("Reversed: %x\n", reversed);
}