#include <stdio.h>

typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

typedef signed long int32;
typedef signed short int16;
typedef signed char int8;

void main(){
	
	uint16 num;
	uint32 factorial = 1;
	printf("Find factorial of number: ");
	scanf("%hi", &num);
	
	for(uint16 i = 1; i <= num; i++){
		factorial *= i;
	}
	printf("%d", factorial);
}