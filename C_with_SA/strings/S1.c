#include "std.h"

void lower_to_upper(uint8 *);

void main(){
	
	uint8 arr[] = "Hello Sameh!";
	
	printf("%s\n", arr);
	
	lower_to_upper(arr);
		
}


void lower_to_upper(uint8 *arr){
	uint8 i;
	for(i = 0; arr[i] != 0; i++){
		if((arr[i] >= 'a') && (arr[i] <= 'z')){
			arr[i] -= ('a' - 'A'); // a - A = 32
		}
	}
	printf("%s", arr);
}
