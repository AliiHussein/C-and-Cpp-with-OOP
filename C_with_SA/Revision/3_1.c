#include <stdio.h>

typedef unsigned char uint8;

void swap1(uint8, uint8);
void swap2(uint8, uint8);
void swap3(uint8, uint8);
void swap4(uint8, uint8);

void main(){
	
	uint8 a = 1, b = 2;
	
	printf("Orginal: a = %d, b = %d\n", a, b);
	
	swap1(a, b);
	swap2(a, b);
	swap3(a, b);
	swap4(a, b);

}

void swap1(uint8 a, uint8 b){
	
	uint8 temp;
	
	temp = a;
	a = b;
	b = temp;
	
	printf("swap1: a = %d, b = %d\n", a, b);
}

void swap2(uint8 a, uint8 b){
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("swap2: a = %d, b = %d\n", a, b);
}

void swap3(uint8 a, uint8 b){
	
	a = a * b;
	b = a / b;
	a = a / b;
	
	printf("swap3: a = %d, b = %d\n", a, b);
}

void swap4(uint8 a, uint8 b){
	
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	
	printf("swap4: a = %d, b = %d\n", a, b);
}