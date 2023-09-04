#include <stdio.h>

void main(){
	short num1, num2;
	
	printf("Enter first num: ");
	scanf("%hi", &num1);
	printf("Enter second num: ");
	scanf("%hi", &num2);
	
	if(num1 > num2){
		printf("Num 1 > Num2");
	}
	else if (num2 > num1){
		printf("Num 2 > Num1");
	}
	else{
		printf("Num 1 = Num1");
	}
}