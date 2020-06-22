
#ifndef BSTREE_H
#define BSTREE_H

#define NOT_HEIGHT_BALANCED -99

typedef struct BSTNode *BSTree;
typedef struct BSTNode {
    int value;
    BSTree left;
    BSTree right;
} BSTNode;

/**
 * Prints  the  height difference between the left subtree and the right
 * subtree  of  every  node  in  the  given binary tree, and returns the
 * height of the binary tree.
 */
int printHeightDiff(BSTree t);

/**
 * Returns the height of the given binary tree if it is height-balanced,
 * and  NOT_HEIGHT_BALANCED otherwise. A tree is height-balanced if, for
 * every  node,  the  absolute difference between the height of the left
 * subtree and right subtree is no greater than 1.
 */
int isHeightBalanced(BSTree t);

#endif
