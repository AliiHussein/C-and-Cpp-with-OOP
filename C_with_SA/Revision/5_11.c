// Write a C Function that take an array and its size, and return the most occurrence element in the array e.g: x[] = {1,2,3,8,6,5,3,9,3,4,3,7,2} the OUTPUT will be 3
#include <stdio.h>

typedef unsigned char uint8;
typedef signed char int8;
typedef unsigned short uint16;
typedef unsigned long uint32;

#define SIZE_OF_ARRAY(x) (sizeof (x) / sizeof(x[0]))

void mostOccurrence(uint8 arr[], uint8 size);

void main(){
	
	uint8 arr[] = {1,2,3,8,6,5,3,9,3,4,3,7,2};
	uint8 size = SIZE_OF_ARRAY(arr);
	
	// check
	for(uint8 i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	mostOccurrence(arr, size);	
	
}	

void mostOccurrence(uint8 arr[], uint8 size){
	
	uint8 occurrence = 1,  maxOccurrence = 0, maxElement;
	
	for(uint8 i = 0; i < size; i++){ 
		for(uint8 j = 1+i; j < size; j++){
			if(arr[i] == arr[j]){
				occurrence++;
			}
		}
		if(occurrence > maxOccurrence){
			maxOccurrence = occurrence;
			maxElement = arr[i];	
		}
		occurrence = 1;
	}
	
	printf("Most occured element is %d, with %d occurence", maxElement, maxOccurrence);
	
}