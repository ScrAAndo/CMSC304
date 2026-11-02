#include "LinkedList.h"
#include "Givens.h"


struct Node* createList(FILE* inf){

	struct Node* head = NULL;
	struct Node* tail = NULL;

	char fileLine[MAX_LINE_SIZE];

	while(fgets(fileLine, MAX_LINE_SIZE, inf) != NULL){
		
		//read the line in .txt file
		fileLine[strcspn(fileLine, "\n")] = 0;
		
		//Create node
		struct Node* newNode = createNode(fileLine);
		
		//put in data:
		//if there is no head, pass the new node into the head
		//if there is no tail, pass into tail
		//if there is a head, add to end of list. take pointer on the tail and point to new node
	
	}

	return head;
}

struct Node* createNode(char* data) {
	//malloc the required space to hold the data
	
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	if (newNode == NULL){
		return NULL;
	}
	//store string inside newNode:
	char* name = (char*)malloc(strlen(data + 1));
	
	if (name == NULL){
		free(newNode);
		return NULL;
	}

	strcpy(name,data);
	newNode->data = name;
	newNode->next = NULL;
	
	return newNode;

}

void insertAtEnd(struct Node** head, struct Node* newNode);

//take pointer that points to the tail and point at newnode


struct Node* removeNode(struct Node** head, int index);

//

void traverse(struct Node* head);

void freeNode(struct Node* aNode);

void freeList(struct Node** head);

