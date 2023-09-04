#include "std.h"

uint8 consecutive(uint8 *arr, uint8 num_of_elements, uint16 value);

void main(){
	uint8 array[] = {1, 1, 1, 5, 5, 5, 3, 3, 5, 5, 5, 5,5,5,5,5,5};
	
	uint8 size = sizeof(array)/sizeof(array[0]), i;
	uint16 num;
	
	printf("Array: ");
	for(i= 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	
	scanf("%hi", &num);
	
	printf("Output: %d", consecutive(array, size, num));

}

uint8 consecutive(uint8 *arr, uint8 num_of_elements, uint16 value){
	uint8 i, j, occurance = 0, max_occurance = 0, num_occured;
	for(i = 0; i < num_of_elements; i++){
		if(arr[i] == value){
			occurance++;
			if(occurance > max_occurance){
				max_occurance = occurance;
			}
		}
		else{
			occurance = 0;
		}
	}
	return max_occurance;
}