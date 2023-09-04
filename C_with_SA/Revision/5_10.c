// Write a C Function that take an array, its size and int* size of the new array, then remove the repeated value and return an array with no repeated values.
#include <stdio.h>

typedef unsigned char uint8;
typedef signed char int8;
typedef unsigned short uint16;
typedef unsigned long uint32;

#define SIZE_OF_ARRAY(x) (sizeof (x) / sizeof(x[0]))

void removeRepeated(uint8 arr[], uint8 size, uint8*);

void main(){
	
	uint8 arr[] = {3,3,4,4,5,5,6,6,7,7,8,8};
	uint8 size = SIZE_OF_ARRAY(arr);
	uint8 *newsize= &size;
	
	// check
	for(uint8 i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	removeRepeated(arr, size, newsize);	
	printf("\n");
	printf("New size: %d", size);
	
}	

void removeRepeated(uint8 arr[], uint8 size, uint8 *newsize){
	
	uint8 newarr[14], n = 0, flag = 0;
	
	for(uint8 i = 0; i < size; i++){ 
		for(uint8 j = 1+i; j < size; j++){
			if(arr[i] == arr[j]){
				flag = 1;
				break;
			}
		}
		
		if(flag == 0){
			newarr[n] = arr[i];
			n++;
		}
		flag = 0;
		
	}
	*newsize = n;
	
	for(uint8 i = 0; i < *newsize; i++){
		printf("%d ",newarr[i]);
	}
	
}