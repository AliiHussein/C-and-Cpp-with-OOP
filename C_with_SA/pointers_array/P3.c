#include "std.h"

void sort_array(uint8 *, uint8);

void main(){
	uint8 arr[] = {4, 2, 29, 19 , 24, 1};
	uint8 size = sizeof(arr)/sizeof(arr[0]), i;
	
	printf("Array: ");
	for(i= 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	sort_array(arr, size);
	
}

void sort_array(uint8 * array, uint8 size){
	uint8 i, j, temp = 0;
	for(i= 0; i < size; i++){
		for(j = (i + 1); j < size; j++){
			if(array[i] < array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
		printf("%d ",array[i]);
	}
}