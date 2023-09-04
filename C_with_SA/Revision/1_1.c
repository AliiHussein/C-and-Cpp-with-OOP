#include <stdio.h>

void main(){
	short num1, num2;
	float Result;
	
	printf("Enter first num: ");
	scanf("%hi", &num1);
	printf("Enter second num: ");
	scanf("%hi", &num2);
	
	
	Result = (((num1 + num2) * 3) /2.0) - 10;
	
	printf("Result = %.1f", Result);
}


