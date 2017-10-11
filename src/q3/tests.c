#include <stdio.h>
#include "genericLinkedList.h"
#include "tests.h"

void printDouble(void * data)
{
	printf("%f\n", *(double*)data);
}

void printInt(void* data) {
	printf("%d\n", *(int*)data);
}

void printChar(void* data) {
	printf("%c\n", *(char*)data);
}
void printStr(void* data) {
	printf("%s\n", (char*)data);
}


void runTests() {

	printf("Tests running...\n");
	double doubleTest = 3.417;
	int intTest = 7;
	

	printf("intTest: \n");
	listElement* l = createEl(&intTest, 30, &printInt);
	traverse(l);
	printf("\nString Test: \n");
	listElement* l2 = insertAfter(l, "another string (2)", 30, &printStr);
	traverse(l);
	printf("\nDouble Test: \n");
	listElement* l3 = insertAfter(l2, &doubleTest, 30, &printDouble);

	traverse(l);

	printf("\nTests complete.\n");
}
