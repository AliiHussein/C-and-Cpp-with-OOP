#include <stdio.h>

void main(){
	short num;
	char i;
	long fact = 1;
	
	printf("Enter a number: ");
	scanf("%hi", &num);
	
	
	// num = 4, then 4 * 3 * 2 * 1
	
	for(i = 1; i <= num; i++){
		fact = fact * i;
	}
	
	printf("Factorial of %d is %d\n", num, fact);
}