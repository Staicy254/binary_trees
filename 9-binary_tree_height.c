#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Points root node of the tree
 *
 * Return: Height of binary tree, or 0 when NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

size_t left_height = binary_tree_height(tree->left);
size_t right_height = binary_tree_height(tree->right);

return (left_height > right_height ? left_height + 1 : right_height + 1);
}

