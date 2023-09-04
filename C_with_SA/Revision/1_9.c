#include <stdio.h>

void main(){
	short num;
	char flag = 0, i, j;
	printf("Enter a number: ");
	scanf("%hi", &num);
	printf("Printing all prime numbers until %d\n", num);
	
	
	for(j = 1; j <= num; j++){
		flag = 0;
		if((j == 1) || (j == 4)){
			continue;
		}
		
		for(i = 2; i < (j/2); i++){
			if(j%i == 0){
				flag = 1;
				break;
			}
		}
		
		if(flag == 0){
			printf("%d\n", j);
		}
	}
	
	
}