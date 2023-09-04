#include <stdio.h>

void print_arr(int arr[], int size);
void push_element(int arr[], int *size, int element);
void pop_element(int arr[], int *size);

void main(){
	int arr[100] = {0};
	int size = 0;
	int *p = &size;
	
	print_arr(arr, size);
	arr[size++] = 3;
	print_arr(arr, size);
	arr[--size] = 0;
	print_arr(arr, size);
	
	
	
	
}

void print_arr(int arr[], int size){
	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void push_element(int arr[], int *size, int element){
	arr[(*size)++] = element;
	print_arr(arr, *size);
	
}

void pop_element(int arr[], int *size){
	(*size)--;
	if((*size) < 0){
		*size = 0;
	}
	print_arr(arr, *size);
}