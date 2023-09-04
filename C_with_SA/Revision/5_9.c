// Write a C Function that take an array and its size, then reverse all the element of the array
#include <stdio.h>

typedef unsigned char uint8;
typedef signed char int8;
typedef unsigned short uint16;
typedef unsigned long uint32;

#define SIZE_OF_ARRAY(x) (sizeof (x) / sizeof(x[0]))

void reverseArray(uint8 arr[], uint8 size);

void main(){
	
	uint8 arr[] = {3,2,5,1,4,6};
	uint8 size = SIZE_OF_ARRAY(arr);
	
	// check
	for(uint8 i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	reverseArray(arr, size);	
	
}	

void reverseArray(uint8 arr[], uint8 size){
	uint8 temp;
	
	for(uint8 i = 0; i < (size/2); i++){ 
		temp = arr[i];
		arr[i] = arr[size-1-i];
		arr[size-1-i] = temp; 
	}
	
	for(uint8 i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
}