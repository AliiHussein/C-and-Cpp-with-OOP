#include "std.h"

void average_of_elements(uint8 *, uint8);

void main(){
	uint8 arr[] = {4, 2, 29, 19 , 24, 1};
	uint8 size = sizeof(arr)/sizeof(arr[0]), i;
	
	printf("Array: ");
	for(i= 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	average_of_elements(arr, size);
	
}

void average_of_elements(uint8 * array, uint8 size){
	uint8 i;
	uint32 total = 0; 
	float average;
	
	for(i= 0; i < size; i++){
		total += array[i];
	}
	
	average = (float)total / size;
	
	printf("Average = %f",average);
}