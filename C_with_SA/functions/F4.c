#include "std.h"

void prime(uint8);

void main(){
	uint8 num;
	
	printf("Num = ");
	scanf("%hi", &num);
	
	prime(num);
}

void prime(uint8 num){
	uint16 i = 0, count = 0;
	for(i = 2; (i*i) <= num; i++){
		count++;
		if( (num % i) == 0 ){
			i = 0;
			printf("Not Prime \n");
			break;
		}
	}
	
	if(i != 0){
		printf("Prime \n");
	}
	
}