#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;


void even_or_odd(uint16);

void main(){
	
	uint16 num;
	
	printf("Enter first number: ");
	scanf("%hi", &num);
	
	//check numbers
	printf("Num = %d\n", num);
	
	even_or_odd(num);
	
}

void even_or_odd(uint16 a){
	if(a%2 == 0){
		printf("Even");
	}
	else{
		printf("Odd");
	}
}

