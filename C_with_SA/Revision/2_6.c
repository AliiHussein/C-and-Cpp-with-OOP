#include <stdio.h>

#define READBIT(var, bit) ((var>>bit) & 1)
#define SETBIT(var, bit)  var |= (1<<bit)
#define CLRBIT(var, bit)  var &= ~(1<<bit)

void main(){
	char num = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(READBIT(num, 2) == READBIT(num, 6)){
	}
	else if((READBIT(num, 2) == 1) && (READBIT(num, 6) == 0)){
		CLRBIT(num , 2);
		SETBIT(num , 6);
	}
	else{
		SETBIT(num , 2);
		CLRBIT(num , 6);
	}
	
	printf("New number is %d",num );
}