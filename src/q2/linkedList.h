#ifndef CT331_ASSIGNMENT_LINKED_LIST
#define CT331_ASSIGNMENT_LINKED_LIST

typedef struct listElementStruct listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(char* data, size_t size);

//Prints out each element in the list
void traverse(listElement* start);

//returns size of linkedList
int length(listElement* list);

//pushes element to head of linkedList
void push(listElement** list, char* data, size_t size);

//Pops element from head of Linkedist
void pop(listElement** list);

//Enqueues element
void enqueue(listElement** list, char* data, size_t size);

//Dequeues element
void dequeue(listElement* list);

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* after, char* data, size_t size);

//Delete the element after the given el
void deleteAfter(listElement* after);


#endif
