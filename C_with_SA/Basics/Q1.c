#include <stdio.h>

void main(){
	/* I avoided using int as it is arch dependant */
    /* declaring user inputs  */
	short num1, num2;
	scanf("%hi %hi",&num1, &num2);
	/* printing for verification */
	printf("num1= %d num2= %d \n", num1, num2);
	
	float Result = (((float)num1+(float)num2)*3)/2-10;
	printf("Result= %.1f", Result);
}