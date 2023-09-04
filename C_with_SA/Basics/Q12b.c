#include <stdio.h>

typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

typedef signed long int32;
typedef signed short int16;
typedef signed char int8;

#define chars 21

void main(){
	uint8 line, char_in_line;
	
	printf("  *******   ******* \n");
	printf(" ********* ********* \n");
	
	for(line = 0; line < 2; line++){
		for(char_in_line = 0; char_in_line < chars; char_in_line++){
		printf("*");
		}
		printf("\n");
	}
	
	for(line = 0; line < 11; line++){
		for(char_in_line = 0; char_in_line < chars; char_in_line++){
			if((char_in_line < line) || (char_in_line > (20 - line)) ){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	
	
}