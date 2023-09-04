#include <stdio.h>

typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

typedef signed long int32;
typedef signed short int16;
typedef signed char int8;

void main(){
	
	uint16 levels, baseOfPyramid;
	printf("Enter number of levels: ");
	scanf("%hi",&levels);
	
	/* nested loop to build the pyramid section */
	for(uint16 i = 0; i < levels; i++){
		baseOfPyramid = 0;
		for(uint16 j = 1; j < (levels - i); j++){
			printf(" ");
		}
		for(uint16 j = 1; j <= (i * 2 + 1); j++){
			printf("*");
			baseOfPyramid++;
		}
		printf("\n");
	}
	
	/* nested loop to build the base section */
	for(uint16 i = 0; i < ((levels / 2) + 1); i++){
		for((uint16 j = 0; j < (baseOfPyramid / 3); j++) || (uint16 j = 0; j < (baseOfPyramid / 3); j++)){
			printf("*");
		}
		for(uint16 j = 0; j < (baseOfPyramid - (baseOfPyramid / 3) * 2); j++){
			printf(" ");
		}
		/*
		for(uint16 j = 0; j < (baseOfPyramid / 3); j++){
			printf("*");
		} */
		printf("\n");
	}
	
}



