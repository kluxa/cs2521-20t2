
#include <stdlib.h>

#include "BSTree.h"

/**
 * Returns the number of nodes in the tree.
 */
int BSTreeNumNodes(BSTree t) {
    // empty tree
    if (t == NULL) {
        return 0;
    
    // leaf (unnecessary)
    // } else if (t->left == NULL && t->right == NULL) {
    //     return 1;

    } else {
        return 1 + BSTreeNumNodes(t->left) + BSTreeNumNodes(t->right);
        
        // int l = BSTreeNumNodes(t->left);
        // int r = BSTreeNumNodes(t->right);
        // return 1 + l + r;
    }
}

/**
 * Returns  the  height  of  the given tree. The height of a tree is the
 * number  of  edges  on  the  longest path from the root node to a leaf
 * node. The height of an empty tree is -1.
 */
int BSTreeHeight(BSTree t) {
    // empty tree
    if (t == NULL) {
        return -1;
    
    // leaf (unnecessary)
    // } else if (t->left == NULL && t->right == NULL) {
    //     return 0;
    
    } else {
        int lh = BSTreeHeight(t->left);
        int rh = BSTreeHeight(t->right);
        return lh > rh ? 1 + lh : 1 + rh;

        // if (lh > rh) {
        //     return 1 + lh;
        // } else {
        //     return 1 + rh;
        // }
    }
}

/**
 * Returns the number of internal nodes in the tree. An internal node is
 * a  node  that  has  one  or more children, i.e., a node that is not a
 * leaf.
 */
int countInternal(BSTree t) {
    // empty tree
    if (t == NULL) {
        return 0;
    
    // leaf - this case is necessary because we need to treat leaves
    //        differently from internal nodes
    } else if (t->left == NULL && t->right == NULL) {
        return 0;
    
    // if we reach this point, we know that t is an internal node
    } else {
        return 1 + countInternal(t->left) + countInternal(t->right);
    }
}

/**
 * Returns the depth of the node containing the given key in the tree if
 * it exists, or -1 otherwise.
 */
int nodeDepth(BSTree t, int key) {
    // couldn't find the key
    if (t == NULL) {
        return -1;
    
    // the key is in the root of the subtree
    } else if (key == t->value) {
        return 0;
    
    // the key is in the left subtree (if it
    // is in the tree at all)
    } else if (key < t->value) {
        // search the left subtree for the key
        int depth = nodeDepth(t->left, key);

        // if the key can't be found in the left
        // subtree return -1, otherwise return 1 +
        // the depth of the key in the left subtree
        return depth == -1 ? -1 : 1 + depth;
    
    } else { // (key > t->value)
        int depth = nodeDepth(t->right, key);
        return depth == -1 ? -1 : 1 + depth;
    }
}

