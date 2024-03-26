#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree using post-order traversal
 * @tree: Pointer to root node tree
 * @func: Pointer that calls function call for each node
 *
 * Description: Traverse the binary tree using post-order traversal,
 *              calling the given function for each visited node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

/**
*Traverse the left subtree
*/
binary_tree_postorder(tree->left, func);

/**
*Traverse the right subtree
*/
binary_tree_postorder(tree->right, func);

/**
*Call the function for the current node
*/
func(tree->n);
}

