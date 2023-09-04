#include <stdio.h>

typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

typedef signed long int32;
typedef signed short int16;
typedef signed char int8;


void main(){
	uint16 num = 3;
	
	while(1){
		uint16 i = 0, count = 0;
		scanf("%hi", &num);
		for(i = 2; (i*i) <= (num); i++){
			count++;
			if((num % i) == 0 ){
				i = 0;
				printf("Not Prime \n");
				break;
			}
		}
		
		if(i != 0){
			printf("Prime \n");
		}
	}	
}