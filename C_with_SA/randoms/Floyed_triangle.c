#include <stdio.h>

void main(){
	int ver, horz = 1;
	
	printf("Enter the range: ");
	scanf("%d", &ver);
	
	for(char i = 0 ;i < ver; i++){
		for(char j = 0; j <= i; j++){
			printf("%d ", horz++);	
		}
		printf("\n");
	}
	
}