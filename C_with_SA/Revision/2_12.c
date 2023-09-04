#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

void main(){
	uint16 num;
	
	printf("Enter a number: ");
	scanf("%hi", &num);
	
	if(num & 1){
		printf("Odd");
	}
	else{
		printf("Even");
	}
	
} 