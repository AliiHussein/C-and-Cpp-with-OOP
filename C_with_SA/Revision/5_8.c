// Write a C program to find second largest element in an array.
#include <stdio.h>

typedef unsigned char uint8;
typedef signed char int8;
typedef unsigned short uint16;
typedef unsigned long uint32;

#define SIZE_OF_ARRAY(x) (sizeof (x) / sizeof(x[0]))

void secondLargest(uint8 arr[], uint8 size);

void main(){
	
	uint8 arr[] = {12,3,2,5,1,4,1,6,7,3,1,5,3,8,9,3,13};
	uint8 size = SIZE_OF_ARRAY(arr);
	
	// check
	for(uint8 i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	secondLargest(arr, size);	
	
}	

void secondLargest(uint8 arr[], uint8 size){
	uint8 max = arr[0];
	uint8 max2 = arr[0];
	//printf("Start: max= %d, second= %d\n", max, max2);
	for(uint8 i = 0; i < size; i++){ 
		if(arr[i] > max2){
			if(arr[i] > max){
				max2 = max;
				max = arr[i];
			}
			else{
				max2 = arr[i];
			}
		}
		//printf("trial[%d]: max= %d, second= %d\n",i, max, max2);
	}
	printf("Second Largest: %d", max2);
}