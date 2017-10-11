#ifndef CT331_ASSIGNMENT_LINKED_LIST
#define CT331_ASSIGNMENT_LINKED_LIST

typedef struct listElementStruct listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(void* data, size_t size, void* type);

//Prints out each element in the list
void traverse(listElement* start);

//returns number of elements in list
int length(listElement* list);

//adds element to head of list
void push(listElement** list, void* data, size_t size, void* type);

//removes element from head of list
void pop(listElement** list);

//Enqueues element
void enqueue(listElement** list, void* data, size_t size, void* type);

//dequeues element
void dequeue(listElement* list);

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* after, void* data, size_t size, void* type);

//Delete the element after the given el
void deleteAfter(listElement* after);


#endif
