#include <stdio.h>

void main(){
	short var1= 20;
	short var2= 20;
	
	if(var1==var2){
		printf("Var1 and Var2 are equal \n");
	}
	else if(var2>var1){
		printf("Var2 is the largest \n");
	}
	else if(var1>var2){
		printf("Var1 is the largest \n");
	}
}