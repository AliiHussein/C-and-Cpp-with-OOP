#include <stdio.h>

void main(){
	// Initializing the variables controlling the width and height of the shape
	char horz = 9, ver = 8;
	
	// Looping on the height (level by level)
	for(char i = 0; i < ver; i++){
		
		// First section of the shape
		if(i < 5){
			for(char j = 0; j < horz; j++){
			if((j < ( 4 - i)) || (j > (4+i))){
				printf(" ");
			}
			else{
				printf("*");
			}
			}
			printf("\n");
		}
		// Second section of the shape
		else{
			printf("***   ***\n");
		}
	}
}

/*
printf("    *    \n");
printf("   ***   \n");
printf("  *****  \n");
printf(" ******* \n");
printf("*********\n");

printf("***   ***\n");
printf("***   ***\n");
printf("***   ***\n");
*/