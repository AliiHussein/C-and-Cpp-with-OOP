#include "std.h"

void check_mirror(uint8 *);
uint8 get_length(uint8 *);

void main(){
	uint8 string[] = "GOALLAOG";
	
	check_mirror(string);
}

void check_mirror(uint8 * string){
	uint8 i, size;
	size = get_length(string);
	
	for(i = 0; i < ((size-1)/2); i++){
		if(string[i] != string[size-2-i]){
			printf("Not Mirrored");
			break;
		}
	}
	if(((size - 1)/2) == i){
			printf("Mirrored");
		}
}

uint8 get_length(uint8 * line){
	uint8 i;
	for(i = 0; line[i] != 0; i++); 
	return i+1;
}