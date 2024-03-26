#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses binary tree using pre-order traversal
 * @tree: Pointer of thevroot node of the tree
 * @func: Pointer of the function to call each node
 *
 * Description: Traverse the binary tree using pre-order traversal,
 *              calling the given function for each visited node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

/**
*Stack is used here as it follows last
*Call the function for the current node
*/
func(tree->n);

/**
* Push all right children onto the stack
*Traverse the left subtree
*/
binary_tree_preorder(tree->left, func);

/*
*Traverse the right subtree
*/
binary_tree_preorder(tree->right, func);
}

