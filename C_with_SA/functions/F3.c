#include "std.h"

void even_odd(uint8);

void main(){
	uint8 x = 32;
	
	printf("x= %d\n", x);
	even_odd(x);
		
}

void even_odd(uint8 u){
	if( u % 2 == 0 ){
		printf("Even");
	}
	else{
		printf("Odd");
	}
}