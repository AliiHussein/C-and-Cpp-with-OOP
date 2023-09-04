#include <stdio.h>

void main(){
	// Initializing the variables controlling the width and height of the shape
	char horz = 21, ver = 15;
	char counter = 1;
	
	// Looping on the height (level by level)
	for(char i = 0; i < ver; i++){
		
		// First section of the shape
		if(i < 2){
			for(char j = 0; j < horz; j++){ 
				if((j < (2-i)) || (j >= (horz-2+i)) || ((j > ((horz/2)-2+i)) && (j < ((horz/2)+2-i)))){
					printf(" ");
				}
				else{
					printf("*");
				}
				
			}
			printf("\n");
		}
		// Second section of the shape
		else if ((i >= 2) && (i  <5)){
			for(char j = 0; j < horz; j++){ 
				printf("*");
			}
			printf("\n");
		}
		
		// Third section of the shape
		else{
			for(char j = 0; j < horz; j++){
				if((j < counter) || (j >= (horz - counter))){
					printf(" ");
				}
				else{
					printf("*");
				}
			}
			counter++;
			printf("\n");
		}
		
	}
}