
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
    int length = 0;

    // for loop
    // 1. initialisation/declaration
    // 2. condition
    // 3. increment
    for (List curr = l; curr != NULL; curr = curr->next) {
        length++;
    }

    return length;
}

int lengthRecursive(List l) {
    // empty list
    if (l == NULL) {
        return 0;
    } else {
        return 1 + lengthRecursive(l->next);
    }
}

////////////////////////////////////////////////////////////
// mean = average

float meanIterative(List l) {
    assert(l != NULL);

    // what do we need?
    int sum = 0;
    int length = 0;
    for (List curr = l; curr != NULL; curr = curr->next) {
        sum += curr->data;
        length++;
    }

    return 1.0 * sum / length;

    // float = 4 bytes = 32 bits
    // double = 8 bytes = 64 bits
}

float meanRecursive(List l) {
    assert(l != NULL);

    int sum = sumRecursive(l);
    int length = lengthRecursive(l);
    return 1.0 * sum / length;
}

////////////////////////////////////////////////////////////

int sumRecursive(List l) {
    if (l == NULL) {
        return 0;
    } else {
        return l->data + sumRecursive(l->next);
    }
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
