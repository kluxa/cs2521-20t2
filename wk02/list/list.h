
#ifndef LIST_H
#define LIST_H

typedef struct _node {
   int data;
   struct _node *next;
} Node;
typedef Node *List;

int lengthIterative(List l);

int lengthRecursive(List l);

float meanIterative(List l);

float meanRecursive(List l);

int sumRecursive(List l);

List arrayToList(int A[], int len);

void printList(List l);

#endif
