/*
Write a code to multiply an input 1byte from user by 14 without using multiplication operator: e.g: user input is
2 -> output will be 28
*/

#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

void main(){
	uint16 num, product;
	
	printf("Enter a number: ");
	scanf("%hi", &num);
	
	num = (num<<3) + (num<<2) + (num<<1); 
	
	printf("Product is: %d", num);
	
} 