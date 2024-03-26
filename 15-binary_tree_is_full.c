#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if - binary tree is full
 * A binary tree is full if every node has either 0 or 2 children.
 *
 * @tree: Pointer - root node of the tree
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/**
*If a node has only one child - tree is not full
*/
if ((tree->left == NULL && tree->right != NULL) ||
(tree->left != NULL && tree->right == NULL))
return (0);

/**
*Recursively check if both subtrees are full
*/
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

