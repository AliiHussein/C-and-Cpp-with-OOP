#include "std.h"

void remove_repeated(uint8 *, uint8);

void main(){
	uint8 arr[] = {4, 2, 29, 29 , 24, 1, 4, 2 , 1, 1}; // 4 2 29 24 1 
	uint8 size = sizeof(arr)/sizeof(*arr), i;
	uint8 new_size = 1, *ptr_size = &new_size;
	
	
	printf("Array: ");
	for(i= 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	remove_repeated(arr, size);
	
	//printf("New Size: %d", *ptr_size);
	
}

void remove_repeated(uint8 * array, uint8 size){
	uint8 i, j, new_arr[20] = {23}, repeated_flag = 0, size_of_new_array = 0;
	
	
	for(i = 0; i < size; i++){
		for(j = 0; j < size_of_new_array; j++){
			if(array[i] == new_arr[j]){
				repeated_flag = 1;
			}
		}
		if(repeated_flag == 0){
			new_arr[size_of_new_array] = array[i];
			size_of_new_array++;
		}
		repeated_flag = 0;
	}
	printf("New Array: ");
	for(i= 0; i < size_of_new_array; i++){
		printf("%d ", new_arr[i]);
	}
	printf("\n");
	printf("Size new: %d",size_of_new_array );
}