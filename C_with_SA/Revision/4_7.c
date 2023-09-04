#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;


void isMirror(uint8 *);

void main(){
	
	uint8 str[10];
	// Enter a string	
	printf("Enter a string1: "); 
	scanf("%s", str); // OR fgets(str, sizeof(str),stdin);
	
	isMirror(str);
}	

void isMirror(uint8 * string){
	uint8 j = 0, flag = 0;
	for(uint8 i = 0; *(string + i) != 0; i++){
		j++;
	}
	j--;
	for(uint8 i = 0; *(string + i) != 0; i++){
		if(string[i] != string[j]){
			flag = 1;
			break;
		}
		j--;
	}
    
	if(flag){
		printf("Is Mirror: NO");
	}
	else{
		printf("Is Mirror: YES");
	}
	
}