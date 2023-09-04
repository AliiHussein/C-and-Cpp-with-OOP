#include "std.h"

void reverse_string(uint8 *);
uint8 get_length(uint8 *);

void main(){
	uint8 string[] = "Hello";
	
	reverse_string(string);
}

void reverse_string(uint8 * string){
	uint8 i, temp, size;
	size = get_length(string);
	
	for(i = 0; i < ((size-1)/2); i++){
		temp = string[i];
		string[i] = string[size-2-i];
		string[size-2-i] = temp;
	}
	printf("%s", string);
}

uint8 get_length(uint8 * line){
	uint8 i;
	for(i = 0; line[i] != 0; i++); 
	return i+1;
}