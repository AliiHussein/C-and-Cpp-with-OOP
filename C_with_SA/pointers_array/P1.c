#include "std.h"

void main(){
	uint32 x = 0x12345678;
	uint8 *p;
	
	p = (uint8 *)&x;
	
	if(*p == 0x78){
		printf("Little Indian");
	}
	else if(*p == 0x12){
		printf("Big Indian");
	}
}