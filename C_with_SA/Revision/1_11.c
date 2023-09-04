#include <stdio.h>

void main(){
	long num;
	short sum = 0;
	
	printf("Enter a muliple digit number: ");
	scanf("%hi", &num);
	
	while(num != 0){
		sum += num%10;
		num = num / 10;
	}
	
	printf("The sum of digits is %d",sum );

	
}