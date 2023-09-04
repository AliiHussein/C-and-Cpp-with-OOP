#include <stdio.h>

void main(){
	char num = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	num |= 3;
	
	printf("New number is %d",num );
}