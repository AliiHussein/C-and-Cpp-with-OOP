#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;


void stringCopy(uint8 *, uint8 *);

void main(){
	
	uint8 str[30];
	uint8 str2[30];
	// Enter a string	
	printf("Enter a string: "); 
	scanf("%s", str); // OR fgets(str, sizeof(str),stdin);
	
	stringCopy(str, str2);
}	

void stringCopy(uint8 * original, uint8 * copy){

	for(uint8 i = 0; *(original + i) != 0; i++){
		copy[i] = original[i];
	}
	printf("Original: %s\n", original);
	printf("Copy: %s\n", copy);
}