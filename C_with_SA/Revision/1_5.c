#include <stdio.h>

// 16, 8, 4, 32, 64, 128

void main(){
	short num, i, j;
	
	for(j = 0; j < 15; j++){ // 5 trials
		long multiple = 1;
		char flag = 0;
		
		printf("Enter a number: ");
		scanf("%hi", &num);
		
		for(i = 0; i < num; i++){  //16
			multiple = multiple * 2;
			if(multiple == num){
				printf("YES\n");
				flag = 1;
				break;
			}
		}
		
		if(flag == 0){
			printf("NO\n");
		}
	
	}		
	
}