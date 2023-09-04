#include "std.h"

void compare_strings(uint8 *, uint8 *);
uint8 get_length(uint8 *);

void main(){
	uint8 string1[] = "Hello world", string2[] = "Hello world";
		
	compare_strings(string1, string2);
}

void compare_strings(uint8 * string1, uint8 * string2){
	uint8 i, j;
	
	uint8 string1_size = get_length(string1);
	uint8 string2_size = get_length(string2);
	
	if(string1_size > string2_size){
		for(i = 0; string1[i] != 0; i++){
			if(string1[i] != string2[i]){
				printf("Not Equal");
				break;
			}
		}
		if((string1_size - 1) == i){
			printf("Equal");
		}
	}
	else{
		for(i = 0; string2[i] != 0; i++){
			if(string1[i] != string2[i]){
				printf("Not Equal");
				break;
			}
		}
		if((string2_size - 1) == i){
			printf("Equal");
		}
	}
}

uint8 get_length(uint8 * line){
	uint8 i;
	for(i = 0; line[i] != 0; i++); 
	return i+1;
}