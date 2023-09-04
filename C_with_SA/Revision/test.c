#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned long uint32;

void main(){
	uint8 var = 4;
	uint8 *p1 = &var;
	uint8 **p2 = &p1;
	uint8 ***p3 = &p2;
	uint8 ****p4 = &p3;
	uint8 *****p5 = &p4;
	uint8 ******p6 = &p5;
	uint8 *******p7 = &p6;
	uint8 ********p8 = &p7;
	uint8 *********p9 = &p8;
	
	
	printf("Var: %d\n", *********p9);
}