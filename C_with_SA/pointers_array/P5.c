#include "std.h"

void min_of_array(uint8 *, uint8);

void main(){
	uint8 arr[] = {4, 2, 29, 19 , 24, 1};
	uint8 size = sizeof(arr)/sizeof(arr[0]), i;
	
	printf("Array: ");
	for(i= 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	min_of_array(arr, size);
	
}

void min_of_array(uint8 * array, uint8 size){
	uint8 i, min = array[0];
	for(i= 1; i < size; i++){
		if(array[i] < min){
			min = array[i];
		}
	}
	printf("Min = %d",min);
}