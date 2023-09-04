#include <stdio.h>

typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

typedef signed long  int32;
typedef signed short int16;
typedef signed char  int8;

void main(){
	uint8 num, flag = 0;
	scanf("%d", &num);
	
	for(uint8 i = 0; i < (num/2); i++){
		if((i*i) == num){
			printf("perfect square");
			flag = 1;
			break;
		}
	}
	if(flag != 1){
		printf("not perfect square");
	}
}
