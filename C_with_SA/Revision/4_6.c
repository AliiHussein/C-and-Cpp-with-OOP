#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;


void stringReverse(uint8 *);

void main(){
	
	uint8 str[10];
	// Enter a string	
	printf("Enter a string1: "); 
	scanf("%s", str); // OR fgets(str, sizeof(str),stdin);
	
	stringReverse(str);
}	

void stringReverse(uint8 * string){
	uint8 j = 0;
	uint8 rev[10];
	for(uint8 i = 0; *(string + i) != 0; i++){
		j++;
	}
    rev[j] = 0;
	j--;
	for(uint8 i = 0; *(string + i) != 0; i++){
		rev[j] = string[i];
		j--;
	}
	printf("Rev: %s", rev);
}