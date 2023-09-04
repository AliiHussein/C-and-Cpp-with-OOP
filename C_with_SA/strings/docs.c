#include "std.h"

void main(){
	uint32 x = 0x12345678;
	uint8 *p;
	p = (uint8 *)&x; //type casted to avoid warning
	
	printf("%x \n", ++*p); //78 (p++ is post increment)
	printf("%x \n", *p); //56
}