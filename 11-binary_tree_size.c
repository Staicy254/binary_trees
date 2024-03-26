#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Size of binary tree, or 0 if is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

size_t left_size = binary_tree_size(tree->left);
size_t right_size = binary_tree_size(tree->right);

return (left_size + right_size + 1);
}

