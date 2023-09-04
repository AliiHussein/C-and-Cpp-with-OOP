#include <stdio.h>

void main(){
	char num = 0, read_bit;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	read_bit = (num>>4) & 1;
	
	printf("The fourth bit is %d",read_bit );
}