#include "std.h"

void concatenate_strings(uint8 *, uint8 *);
uint8 get_length(uint8 *);

void main(){
	uint8 string1[] = "Hello ", string2[] = "World";
	
	concatenate_strings(string1, string2);
}

void concatenate_strings(uint8 * string1, uint8 * string2){
	uint8 i, j;
	uint8 size_of_string3 = get_length(string1)+get_length(string2);
	uint8 string3[size_of_string3];
	
	for(i = 0; string1[i] != 0; i++){
		string3[i] = string1[i];
	}
	for(j = 0; string2[j] != 0; j++){
		string3[i+j] = string2[j];
	}
	printf("\n");
	printf("%s", string3);
	

}

uint8 get_length(uint8 * line){
	uint8 i;
	for(i = 0; line[i] != 0; i++); 
	return i+1;
}