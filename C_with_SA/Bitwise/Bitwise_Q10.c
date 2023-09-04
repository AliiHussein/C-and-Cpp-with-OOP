#include <stdio.h>

typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

typedef signed long int32;
typedef signed short int16;
typedef signed char int8;

#define READBIT(var, bit) ((var >> bit) & 1)

void main(){
	
	//Variables initialization
	uint8 zeroCounter = 0, max = 0, startCountingFlag = 0;
	// Number to check
	uint32 num = 0b100000000100001000000;
	//scanf("%d", & num);
	
	// Looping over the bits
	while(num != 0){
		if( (num & 1) == 1){
			startCountingFlag = 1;
			if(zeroCounter > max){
				max = zeroCounter;
			}
			zeroCounter = 0;
		}
		else if (startCountingFlag == 1 ){
			zeroCounter++;
		}
		num = num >> 1;
	}
	printf("Maximum number of zeros between 1's is: %d", max);
}