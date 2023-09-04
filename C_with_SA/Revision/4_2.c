#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;


void string_length(uint8 *);

void main(){
	
	uint8 str[30];
	// Enter a string	
	printf("Enter a string: "); 
	scanf("%s", str); // OR fgets(str, sizeof(str),stdin);
	
	string_length(str);
}	

void string_length(uint8 * string){
	uint8 length = 1;
	for(uint8 i = 0; *(string + i) != 0; i++){
		length++;
	}
	printf("Length of %s is %d", string, length);
}