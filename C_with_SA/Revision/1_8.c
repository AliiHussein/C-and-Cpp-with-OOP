//Write a program that reads a student grade percentage and prints "Excellent" if his grade is greater than or
//equal 85, "Very Good" for 75 or greater; "Good" for 65, "Pass" for 50, "Fail" for less than 50. 

#include <stdio.h>

void main(){
	short grade;
	
	printf("Enter a number: ");
	scanf("%hi", &grade);
	
	
	if(grade >= 85){
		printf("Excellent");
	}
	else if(grade >= 75){
		printf("Very good");
	}
	else if(grade >= 65){
		printf("Good");
	}
	else if(grade >= 50){
		printf("Pass");
	}
	else{
		printf("Fail");
	}
	
	
}