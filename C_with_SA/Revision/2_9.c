#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned long uint32;

void main(){
	uint8 num = 0b10100011;  
	uint8 zero_counter = sizeof(num) * 8;
	uint8 one_counter = 0;
		
	
	for(uint8 i = 0; num != 0; i++){
		if(num & 1){
			one_counter++;
			zero_counter--;
		}
		num = num >> 1;
	}
	
	printf("One counter is %d\n",one_counter );
	printf("Zero counter is %d",one_counter );
} 