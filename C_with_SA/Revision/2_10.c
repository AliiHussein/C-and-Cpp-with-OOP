/*
Write a program that reads a positive integer and calculate the number of consecutive zeros between two ones
e.g: 0b11000110100111000001 the result will be 5
*/

#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned long uint32;

void main(){
	uint32 num = 0b1000100000010000010001;  
	uint8 zero_counter = 0;
	uint8 max_zero_count = 0;
	uint8 start_count = 0;
		
	for(uint8 i = 0; num != 0; i++){
		if((num & 1) && (start_count == 0)){
			start_count = 1;
		}
		else if(((num & 1) == 0) && (start_count == 1)){
			zero_counter++;
		}
			
		if((num & 1) && (start_count == 1)){
			if(zero_counter > max_zero_count){
				max_zero_count = zero_counter;
			}
			zero_counter = 0;
		}
		num = num >> 1;
	}
	
	printf("max_zero_count = %d",max_zero_count );
} 