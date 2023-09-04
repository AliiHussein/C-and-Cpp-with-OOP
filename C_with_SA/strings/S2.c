#include "std.h"

uint8 get_length(uint8 *);

void main(){
	uint8 arr[] = "Hello"; 
	
	uint8 size = get_length(arr);
	
	printf("%d",size);
	
}

uint8 get_length(uint8 * line){
	uint8 i;
	for(i = 0; line[i] != 0; i++); 
	return i+1;
}

