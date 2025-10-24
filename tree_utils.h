#ifndef TREE_UTILS_H
#define TREE_UTILS_H

#include <stddef.h>

// Definition of a binary tree node
typedef struct TreeNode {
    int value;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

// Function prototypes
TreeNode* build_balanced_bst(const int *values, size_t n);
void free_tree(TreeNode *root);
void print_inorder(const TreeNode *root);

#endif
