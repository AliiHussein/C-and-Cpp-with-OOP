// Write a C Function that take an array and its size, return the average of its elements
#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

#define SIZE_OF_ARRAY(x) (sizeof (x) / sizeof(x[0]))

void averageOfElement(uint8 arr[], uint8 size);

void main(){
	
	uint8 arr[5] = {3,2,5,1,4};
	uint8 size = SIZE_OF_ARRAY(arr);
		
	// check
	for(uint8 i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
		
	averageOfElement(arr, size);
	
}	

void averageOfElement(uint8 arr[], uint8 size){
	uint8 average = 0;
	uint8 i = 0;
	
	for(i = 0; i < size; i++){ 
		average += arr[i];
	}
	average = average/i;
	
	printf("Average= %d", average);
}