#include "std.h"

uint8 most_occured(uint8 *arr, uint8 num_of_elements);

void main(){
	uint8 array[] = {1,2,3,1,6,1,1,9,3,1,3,7,2,1,7,7,7};
	uint8 size = sizeof(array)/sizeof(array[0]), i;
	
	printf("Array: ");
	for(i= 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	
	printf("Most Occurance: %d", most_occured(array, size));
}

uint8 most_occured(uint8 *arr, uint8 num_of_elements){
	uint8 i, j, occurance = 0, max_occurance = 0, num_occured;
	for(i = 0; i < num_of_elements; i++){
		for(j = 0; j < num_of_elements; j++){
			if(arr[i] == arr[j]){
				occurance++;
				if(occurance > max_occurance){
					max_occurance = occurance;
					num_occured = arr[i];
				}
			}
		}
		occurance = 0;
	}
	return num_occured;
}