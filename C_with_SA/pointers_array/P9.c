#include "std.h"

void reverse(uint8* array, uint8 size);

void main(){
	uint8 arr[] = {1, 5, 6, 3, 2 , 4, 5};
	uint8 size = sizeof(arr)/sizeof(arr[0]), i;
	
	printf("Array:    ");
	for(i= 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	reverse(arr, size);
	
}

void reverse(uint8 * array, uint8 size){
	uint8 i, j, temp = 0;
	
	for(i= 0; i < (size / 2); i++){
		temp = array[i];
		array[i] = array[size -1 - i];
		array[size - 1 - i] = temp;
	}
	
	printf("Reversed: ");
	for(i= 0; i < size; i++){
		printf("%d ", array[i]);
	}
}