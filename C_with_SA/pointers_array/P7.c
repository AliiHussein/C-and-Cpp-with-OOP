#include "std.h"

uint8 integer_search(uint8 *, uint8, uint8);

void main(){
	uint8 arr[] = {4, 2, 29, 19 , 24, 1};
	uint8 size = sizeof(arr)/sizeof(arr[0]), i, number;
	number = 2;
	
	printf("Array: ");
	for(i= 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	i = integer_search(arr, number,size);
	
	if(i != 0){
		printf("The number index is: %d", i);
	}
	else{
		printf("There is no match");
	}
	
}

uint8 integer_search(uint8 * array, uint8 number, uint8 size){
	uint8 i;
	
	for(i= 0; i < size; i++){
		if(number == array[i]){
			return i;
		}
	}
	return 0;
}