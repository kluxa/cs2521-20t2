
#include <stdio.h>
#include <stdlib.h>

#include "BSTree.h"

/**
 * Prints  the  height difference between the left subtree and the right
 * subtree  of  every  node  in  the  given binary tree, and returns the
 * height of the binary tree.
 */
int printHeightDiff(BSTree t) {
    if (t == NULL) {
        return -1;
    }

    int lh = printHeightDiff(t->left);
    int rh = printHeightDiff(t->right);
    printf("At node %d, difference is %d\n", t->value, lh - rh);
    return 1 + (lh > rh ? lh : rh);
}

/**
 * Returns the height of the given binary tree if it is height-balanced,
 * and  NOT_HEIGHT_BALANCED otherwise. A tree is height-balanced if, for
 * every  node,  the  absolute difference between the height of the left
 * subtree and right subtree is no greater than 1.
 */
int isHeightBalanced(BSTree t) {
    return -1;
}
