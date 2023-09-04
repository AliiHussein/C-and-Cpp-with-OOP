#include <stdio.h>

void main(){
	short num;
	float i;
	char flag = 0;
	
	printf("Enter a number: ");
	scanf("%hi", &num);
	
	
	//25, 16, 64, 9, 49   -> perfect square
	//8, 5, 32            -> not perfect square
	
	for(i = 1.0; i <= (num/2); i++){
		if((num/i) == i){
			printf("Perfect Square");
			flag = 1;
			break;
		}
	}
	
	if(flag == 0){
		printf("Not Perfect Square");
	}
	
	
}