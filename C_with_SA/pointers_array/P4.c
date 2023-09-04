#include "std.h"

void max_of_array(uint8 *, uint8);

void main(){
	uint8 arr[] = {4, 2, 29, 19 , 24, 1};
	uint8 size = sizeof(arr)/sizeof(arr[0]), i;
	
	printf("Array: ");
	for(i= 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	max_of_array(arr, size);
	
}

void max_of_array(uint8 * array, uint8 size){
	uint8 i, max = array[0];
	for(i= 1; i < size; i++){
		if(array[i] > max){
			max = array[i];
		}
	}
	printf("Max = %d",max);
}