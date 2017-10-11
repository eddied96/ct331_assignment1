#include <stdio.h>
#include "genericLinkedList.h"
#include "tests.h"
void printChar(void* data) {
	printf("%c\n", *(char*)data);
}

void printDouble(void * data)
{
	printf("%f\n", *(double*)data);
}

void printInt(void* data) {
	printf("%d\n", *(int*)data);
}

void printStr(void* data) {
	printf("%s\n", (char*)data);
}


void runTests(){
	
  printf("Tests running...\n");
  int aTest = 4;
  double dTest = 3.33;
  
  printf("testing passing int: \n");
  listElement* l = createEl(&aTest, 30, &printInt);
  traverse(l);
  printf("\ntesting passing string: \n");
  listElement* l2 = insertAfter(l, "another string (2)", 30, &printStr);
  traverse(l);
  printf("\ntesting passing double: \n");
  listElement* l3 = insertAfter(l2, &dTest, 30, &printDouble);

  traverse(l);

  printf("\nTests complete.\n");
}
