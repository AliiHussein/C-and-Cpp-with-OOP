#include "std.h"

void concatenate_strings(uint8 *, uint8 *);
uint8 get_length(uint8 *);

void main(){
	uint8 string1[] = "Hello ", string2[] = "World";
	
	concatenate_strings(string1, string2);
}

void concatenate_strings(uint8 * string1, uint8 * string2){
	uint8 i, j;
	
	for(i = 0; string1[i] != 0; i++){
	}
	for(j = 0; string2[j] != 0; j++){
		string1[i+j] = string2[j];
	}
	printf("%s", string1);
	

}

uint8 get_length(uint8 * line){
	uint8 i;
	for(i = 0; line[i] != 0; i++); 
	return i+1;
}