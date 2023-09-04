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
	uint8 flag = 0;
	for(uint8 i = 0; *(string1 + i) != 0; i++){
		if(string1[i] != string2[i]){
			flag = 1;
		}
	}
	if(flag){
		printf("Not Equal");
	}
	else{
		printf("Equal");
	}

	
}