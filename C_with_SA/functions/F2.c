#include "std.h"

void muliple_of(uint8, uint8);

void main(){
	uint8 x = 20, y = 3;
	
	printf("x= %d y= %d \n", x, y);
	muliple_of(x, y);
		
}

void muliple_of(uint8 u, uint8 j){
	if( u % j == 0 ){
		printf("True, %d is multiple of %d",u,j);
	}
	else{
		printf("False, %d is not multiple of %d",u,j);
	}
}