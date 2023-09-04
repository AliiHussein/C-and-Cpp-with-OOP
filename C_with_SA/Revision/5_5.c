// Write a C Function that take an array and its size, return the min number.
#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

#define SIZE_OF_ARRAY(x) (sizeof (x) / sizeof(x[0]))

void min_element(uint8 arr[], uint8 size);

void main(){
	
	uint8 arr[5] = {3,2,5,1,4};
	uint8 size = SIZE_OF_ARRAY(arr);
		
	// check
	for(uint8 i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
		
	min_element(arr, size);
	
}	

void min_element(uint8 arr[], uint8 size){
	uint8 min = arr[0];
	
	for(uint8 i = 1; i < size; i++){ // starts from element 1 instead of 0 as the max is already arr[0]
		if(arr[i] < min){
			min = arr[i];
		}
	}
	
	printf("Min= %d", min);
}