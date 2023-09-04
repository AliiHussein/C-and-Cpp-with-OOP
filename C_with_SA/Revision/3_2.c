#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;


void is_multiple(uint16, uint16);

void main(){
	
	uint16 num1, num2;
	
	printf("Enter first number: ");
	scanf("%hi", &num1);
	printf("Enter second number: ");
	scanf("%hi", &num2);
	
	//check numbers
	printf("Num1 = %d, Num2 = %d\n", num1, num2);
	
	is_multiple(num1, num2);
	
}

void is_multiple(uint16 a, uint16 b){
	if(a%b == 0){
		printf("Multiple: True");
	}
	else{
		printf("Multiple: False");
	}
}

