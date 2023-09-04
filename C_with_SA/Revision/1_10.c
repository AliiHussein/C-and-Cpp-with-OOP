#include <stdio.h>

void main(){
	short num1, num2;
	float num3, num4;
	
	printf("Enter a four numbers: ");
	scanf("%hi %hi %f %f", &num1, &num2, &num3, &num4);
	
	printf("Add: %d, Sub: %d\n", num1 + num2, num1 - num2);
	printf("Add: %.1f, Sub: %.1f", num3 + num4, num3 - num4);

	
}