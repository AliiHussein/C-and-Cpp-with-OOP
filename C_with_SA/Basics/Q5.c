#include <stdio.h>

typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

typedef signed long int32;
typedef signed short int16;
typedef signed char int8;


void main(){
	uint8 num;
	scanf("%d", &num);
	
	float numF = (float)num;
	
	while(numF > 1){
		numF = numF/2;
		//printf("%f \n",numF);
	}
	
	if(numF == 1){
		printf("yes");
	}
	else{
		printf("NO");
	}
	
}