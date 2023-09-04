#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;


void stringConc(uint8 *, uint8 *);

void main(){
	
	uint8 str[10];
	uint8 str2[10];
	// Enter a string	
	printf("Enter a string1: "); 
	scanf("%s", str); // OR fgets(str, sizeof(str),stdin);
	printf("Enter a string2: "); 
	scanf("%s", str2); // OR fgets(str, sizeof(str),stdin);
	
	stringConc(str, str2);
}	

void stringConc(uint8 * string1, uint8 * string2){
	uint8 j = 0;
	uint8 string3[20];
	for(uint8 i = 0; *(string1 + i) != 0; i++){
		string3[j++] = string1[i];
	}
	for(uint8 i = 0; *(string2 + i) != 0; i++){
		string3[j++] = string2[i];
	}
	printf("string3: %s\n", string3);
}