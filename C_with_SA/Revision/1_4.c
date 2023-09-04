#include <stdio.h>

// prime : 2, 3, 5, 7, 11, 13, 17, 19, 23 and 29

void main(){
	short num, i, j;
	char flag = 0;
	
	for(j = 0; j < 5; j++){ // 5 trials
		flag = 0;
		printf("Enter a number: ");
		scanf("%hi", &num);
		
		if(num == 4){
			printf("Not Prime\n");
			flag = 1;
		}
		
		for(i = 2; i < (num/2); i++){
			if(num%i == 0){
				printf("Not Prime\n");
				flag = 1;
				break;
			}
		}
		
		if(flag == 0){
			printf("Prime\n");
		}
	}
	
}