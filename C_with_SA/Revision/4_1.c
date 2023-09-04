#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;


void lowerToUpper(uint8 *);

void main(){
	
	uint8 str[30];
	// Enter a string	
	printf("Enter a string: ");
	fgets(str, sizeof(str),stdin);
	
	lowerToUpper(str);
	
}

void lowerToUpper(uint8 * string){
	for(uint8 i = 0; string[i] != 0; i++){
		if((string[i] >= 'a') && (string[i] <= 'z')){
			string[i] = string[i] - ('a' - 'A');
		}
	}
	printf("%s",string);
}

