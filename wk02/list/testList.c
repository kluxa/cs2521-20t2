
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

List l1, l2, l3, l4;

void initLists(void);
void testLength(void);
void testMean(void);

int main(void) {
    initLists();
    testLength();
    testMean();
}

void initLists(void) {
    int A1[] = {};
    l1 = arrayToList(A1, 0);

    int A2[] = {3};
    l2 = arrayToList(A2, 1);

    int A3[] = {4, 6};
    l3 = arrayToList(A3, 2);

    int A4[] = {3, 1, 4, 1};
    l4 = arrayToList(A4, 4);

    printf("l1: ");
    printList(l1);
    printf("l2: ");
    printList(l2);
    printf("l3: ");
    printList(l3);
    printf("l4: ");
    printList(l4);
}

void testLength(void) {
    assert(lengthIterative(l1) == 0);
    assert(lengthRecursive(l1) == 0);
    assert(lengthIterative(l2) == 1);
    assert(lengthRecursive(l2) == 1);
    assert(lengthIterative(l3) == 2);
    assert(lengthRecursive(l3) == 2);
    assert(lengthIterative(l4) == 4);
    assert(lengthRecursive(l4) == 4);
}

void testMean(void) {
    assert(meanIterative(l2) == 3.00);
    assert(meanRecursive(l2) == 3.00);
    assert(meanIterative(l3) == 5.00);
    assert(meanRecursive(l3) == 5.00);
    assert(meanIterative(l4) == 2.25);
    assert(meanRecursive(l4) == 2.25);
}
