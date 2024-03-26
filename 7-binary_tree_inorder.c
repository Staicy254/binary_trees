#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree
 * @func: Pointer that calls function call for each node
 *
 * Description: Traverse the binary tree using in-order traversal,
 *              calling the given function for each visited node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

/**
*Traverse the left subtree
*/
binary_tree_inorder(tree->left, func);

/**
*Call the provided function with the value of
*Call the function for the current node
*/
func(tree->n);

/**
*Traverse the right subtree
*/
binary_tree_inorder(tree->right, func);
}

