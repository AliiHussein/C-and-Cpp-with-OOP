// Write a C Function that take an array, an int and its size, return 0 if this integer is not found and the index of the int in the array if it is found.
#include <stdio.h>

typedef unsigned char uint8;
typedef signed char int8;
typedef unsigned short uint16;
typedef unsigned long uint32;

#define SIZE_OF_ARRAY(x) (sizeof (x) / sizeof(x[0]))

int8 isElementAvailable(uint8 arr[], uint8 size, uint8 element);

void main(){
	
	uint8 arr[5] = {3,2,5,1,4};
	uint8 size = SIZE_OF_ARRAY(arr);
	uint16 num;
	
	// check
	for(uint8 i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	printf("Enter a number: ");
	scanf("%hi", &num);
	
	printf("Element: %d\n", isElementAvailable(arr, size, num));	
	
}	

int8 isElementAvailable(uint8 arr[], uint8 size, uint8 element){
	for(uint8 i = 0; i < size; i++){ 
		if(arr[i] == element){
			printf("Found\n");
			return i;
		}
	}
	printf("Not Found\n");
	return -1;
}