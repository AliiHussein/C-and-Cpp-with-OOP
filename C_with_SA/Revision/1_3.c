#include <stdio.h>

void main(){
	short num;
	
	printf("Enter a number: ");
	scanf("%hi", &num);
	
	num = num % 2;
	
	if (num == 0){
		printf("Even");
	}
	else{
		printf("Odd");
	}

}