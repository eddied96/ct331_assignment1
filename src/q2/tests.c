#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests() {
	printf("Tests running...\n");
	listElement* l = createEl("1", 30);
	//Test create and traverse
	traverse(l);
	printf("\n");

	//Test insert after
	listElement* l2 = insertAfter(l, "another string (2)", 30);
	insertAfter(l2, "a final string (3)", 30);
	traverse(l);
	printf("\n");

	//Testing Length
	printf("Length: %d\n", length(l));
	printf("\n");

	//Push element
	printf("Pushing element to linkedList\n");
	push(&l, "new element(0)", 30);
	traverse(l);
	printf("Number of element in array now: %d\n", length(l));
	printf("\n");

	//Pop element
	printf("Popping element from linkedList\n");
	pop(&l);
	traverse(l);
	printf("New lenth of array: %d\n", length(l));
	printf("\n");

	//Enqueue element
	printf("Enqueuing element to head of linkedList\n");
	enqueue(&l, "Element (4)", 30);
	traverse(l);
	printf("New length of array: %d\n", length(l));
	printf("\n");

	//Dequeue Element
	printf("Deqeueing element from tail of linkedList\n");
	dequeue(l);
	traverse(l);
	printf("New length of linkedList: %d\n", length(l));
	printf("\n");

	// Test delete after
	deleteAfter(l);
	traverse(l);
	printf("\n");


	printf("\nTests complete.\n");
}