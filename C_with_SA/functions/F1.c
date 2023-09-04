#include "std.h"

void swap(uint8 *, uint8 *);

void main(){
	uint8 x = 100, y = 200;
	printf("x= %d y= %d \n", x, y);
	swap(&x, &y);
	
	printf("x= %d y= %d", x, y);
	
}

void swap(uint8* u, uint8* j){
	uint8 temp;
	temp = *u;
	*u = *j;
	*j = temp;
}