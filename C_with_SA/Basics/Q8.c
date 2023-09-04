#include <stdio.h>

void main(){
	short grade;
	scanf("%hi", &grade);
	
	if(grade>=85){
		printf("Excellent");
	}
	else if(grade>=75){
		printf("Very Good");
	}
	else if(grade>=65){
		printf("Good");
	}
	else if(grade>=50){
		printf("Pass");
	}
	else{
		printf("Fail");
	}
}