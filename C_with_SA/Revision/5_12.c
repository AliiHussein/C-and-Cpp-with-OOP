/*  
Write a function which count the max number of consecutive elements in an array of 12 element:
x[10] = {1, 1, 1, 5, 5, 5, 3, 3, 5, 5, 5, 5} and the user enter 5 then the output will be 4
char consecutive(char *arr, char value);
*/
#include <stdio.h>

typedef unsigned char uint8;
typedef signed char int8;
typedef unsigned short uint16;
typedef unsigned long uint32;

#define SIZE_OF_ARRAY(x) (sizeof (x) / sizeof(x[0]))

void consecutive(uint8 arr[], uint8 size, uint8 value);

void main(){
	
	uint8 arr[] = {1, 1, 1, 5, 5, 5, 3, 3, 5, 5, 5, 5,6,6,6,6,6,6,9,9,0};
	uint8 size = SIZE_OF_ARRAY(arr);
	uint16 value;
	
	// check
	for(uint8 i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	printf("Enter a value:");
	scanf("%hi", &value);
	
	consecutive(arr, size, value);	
	
}	

void consecutive(uint8 arr[], uint8 size, uint8 value){
	
	uint8 occurrence = 0,  maxOccurrence = 0;
	
	for(uint8 i = 0; i < size; i++){ 
		if(arr[i] == value){
			occurrence++;
		}
		else{
			occurrence=0;
		}
		
		if(occurrence > maxOccurrence){
			maxOccurrence = occurrence;
		}
	}
	
	printf("%d max consecutive occurrence is %d times", value, maxOccurrence);
	
}