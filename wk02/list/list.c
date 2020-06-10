
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

// defined in list.h
//
// typedef struct _node {
//    int data;
//    struct _node *next;
// } Node;
// typedef Node *List;

int lengthIterative(List l) {
    return 0;
}

int lengthRecursive(List l) {
    return 0;
}

////////////////////////////////////////////////////////////

float meanIterative(List l) {
    return 0.0;
}

float meanRecursive(List l) {
    return 0.0;
}

////////////////////////////////////////////////////////////

int sumRecursive(List l) {
    return 0;
}

////////////////////////////////////////////////////////////

static List newNode(int val);

List arrayToList(int A[], int len) {
    List head = NULL;
    List curr = NULL;
    for (int i = 0; i < len; i++) {
        List node = newNode(A[i]);
        if (head == NULL) {
            head = node;
            curr = node;
        } else {
            curr->next = node;
            curr = node;
        }
    }
    return head;
}

static List newNode(int val) {
    List n = malloc(sizeof(*n));
    if (n == NULL) {
        fprintf(stderr, "Insufficient memory!\n");
        exit(EXIT_FAILURE);
    }
    n->data = val;
    n->next = NULL;
    return n;
}

////////////////////////////////////////////////////////////

void printList(List l) {
    for (List n = l; n != NULL; n = n->next) {
        printf("%d -> ", n->data);
    }
    printf("X\n");
}
