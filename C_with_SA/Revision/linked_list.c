#include <stdio.h>
#include <stdlib.h>

typedef unsigned char uint8;

struct Node{
	uint8 data;
	struct Node * next;  // pointer of type (struct Node) named next
};

// This function prints contents of linked list starting
// from the given node
void printList(struct Node* n)
{
    while (n != NULL) {
        printf("%d ", n->data);
        n = n->next;
    }
}

void getMiddle(struct Node* head){
	//varibales
	struct Node* temp = head;
	uint8 size = 0;
	
	while(temp != NULL){
		temp = temp->next;
		size++;
	}
	printf("\n");
	printf("%d\n", size);
	
	size = (size/2)+1;
	
	for(uint8 i = 1; i < size; i++){
		head = head->next;
	}
	printf("%d", head->data);
	
	
}


void main(){
	
	
	struct Node * head = NULL;
	struct Node * second = NULL;
	struct Node * third = NULL;
	struct Node * fourth = NULL;
	struct Node * fifth = NULL;
	
	head = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));
	fourth = (struct Node *)malloc(sizeof(struct Node));
	fifth = (struct Node *)malloc(sizeof(struct Node));
	
	head->data = 5;
	head->next = second;
	
	second->data = 4;
	second->next = third;
	
	third->data = 3;
	third->next = fourth;
	
	fourth->data = 2;
	fourth->next = fifth;
	
	fifth->data = 1;
	fifth->next = NULL;
	
	// Function call
    printList(head);

	getMiddle(head);
	
}