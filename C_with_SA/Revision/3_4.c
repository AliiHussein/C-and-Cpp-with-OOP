#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;


void is_prime(uint16);

void main(){
	
	uint16 num;
	
	printf("Enter number: ");
	scanf("%hi", &num);
	
	//check numbers
	printf("Num = %d\n", num);
	
	is_prime(num);
	
}

void is_prime(uint16 a){
	uint8 flag = 0, i;
	
	if(a == 4){
		printf("Not Prime\n");
		flag = 1;
	}
	
	for(i = 2; i < (a/2); i++){
		if(a%i == 0){
			printf("Not Prime\n");
			flag = 1;
			break;
		}
	}
	
	if(flag == 0){
		printf("Prime\n");
	}
}

