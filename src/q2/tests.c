#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests(){
  printf("Tests running...\n");
  listElement* l = createEl("1", 30);
  //printf("%s\n%p\n", l->data, l->next);
  //Test create and traverse
  traverse(l);
  printf("\n");

  //Test insert after
  listElement* l2 = insertAfter(l, "another string (2)", 30);
  insertAfter(l2, "a final string (3)", 30);
  traverse(l);
  printf("\n");

  //test length
  printf("Testing the length function: %d\n", length(l));
  printf("\n");

  //test push
  printf("Testing Push\n");
  push(&l, "new element(0)", 30);
  traverse(l);
  printf("Testing the length function: %d\n", length(l));
  printf("\n");

  //test pop
  printf("Testing Pop\n");
  pop(&l);
  traverse(l);
  printf("Testing the length function: %d\n", length(l));
  printf("\n");

  //test enqueue
  printf("Testing enqueue\n");
  enqueue(&l, "new Element (0)", 30);
  traverse(l);
  printf("Testing the length function: %d\n", length(l));
  printf("\n");

  //test dequeue
  printf("Testing dequeue\n");
  dequeue(l);
  traverse(l);
  printf("Testing the length function: %d\n", length(l));
  printf("\n");

  // Test delete after
  deleteAfter(l);
  traverse(l);
  printf("\n");


  printf("\nTests complete.\n");
}
