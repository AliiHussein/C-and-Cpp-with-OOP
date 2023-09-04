#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;


void calc(uint16, uint8, uint16);

void main(){
	//variables
	uint16 num1, num2;
	uint8 operant;
	
	printf("Enter operant: ");
	scanf("%c", &operant);
	printf("Enter first number: ");
	scanf("%hi", &num1);
	printf("Enter second number: ");
	scanf("%hi", &num2);
	
	//check
	printf("%d %c %d = ", num1, operant, num2);
	calc(num1, operant, num2);
	
	
}

void calc(uint16 num1, uint8 operant, uint16 num2){
	
	switch(operant){
		case '+': printf("%d", num1+num2); break;
		case '-': printf("%d", num1-num2); break;
		case '/': printf("%d", num1/num2); break;
		case '*': printf("%d", num1*num2); break;
		default: printf("Error Wrong operant");
	}

}

