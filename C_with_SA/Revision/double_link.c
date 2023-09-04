#include <stdio.h>
#include <stdlib.h>

typedef unsigned char uint8;

struct Node{
	uint8 data;
	struct Node * next;  // pointer of type (struct Node) named next
	struct Node * prev;  // pointer of type (struct Node) named prev
};

void main(){
	struct Node * head = NULL;
	struct Node * second = NULL;
	struct Node * third = NULL;
	
	head = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));
	
	head->data = 5;
	head->next = second;
	head->prev = NULL;
	
	second->data = 4;
	second->next = third;
	second->prev = head;
	
	third->data = 3;
	third->next = NULL;
	third->prev = second;
	
	printf("%d", third->prev->data);
}