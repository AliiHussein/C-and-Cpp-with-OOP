#include "std.h"

uint16 add(uint16 a, uint16 b);
uint16 sub(uint16 a, uint16 b);
uint16 multiply(uint16 a, uint16 b);
uint16 divide(uint16 a, uint16 b);

void main(){
	uint16 (*calc[])(uint16, uint16) = {add, sub, multiply, divide};
	uint16 a ,b ;
	uint8 op;
	scanf("%hi%c%hi", &a, &op,&b);
	
	switch(op){
		case '+': printf("%d",calc[0](a, b)); break;
		case '-': printf("%d",calc[1](a, b)); break;
		case '*': printf("%d",calc[2](a, b)); break;
		case '/': printf("%d",calc[3](a, b)); break;
		default: break;
	}
	
}

uint16 add(uint16 a, uint16 b){
	return a + b;
}

uint16 sub(uint16 a, uint16 b){
	return a - b;
}

uint16 multiply(uint16 a, uint16 b){
	return a * b;
}

uint16 divide(uint16 a, uint16 b){
	return a / b;
}