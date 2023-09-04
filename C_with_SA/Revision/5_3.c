//  Write a C Function that take an array and its size, then sorting the element descending.

#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

#define SIZE_OF_ARRAY(x) (sizeof (x) / sizeof(x[0]))

void sort_descend(uint8 arr[], uint8 size);

void main(){
	
	uint8 arr[5] = {3,2,5,1,4};
	uint8 size = SIZE_OF_ARRAY(arr);
		
	// check
	for(uint8 i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
		
	sort_descend(arr, size);
	
}	

void sort_descend(uint8 arr[], uint8 size){
	uint8 temp;
	
	for(uint8 i = 0; i < size; i++){ // starts from element 1 instead of 0 as the max is already arr[0]
		for(uint8 j = i+1; j < size; j++){
			if(arr[i] < arr[j]){
				//swap
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(uint8 i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}