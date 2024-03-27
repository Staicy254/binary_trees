#include "binary_trees.h"

/**
 * binary_tree_height - Checks the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * A binary tree is perfect if all its levels are fully filled.
 *
 * @tree: Pointer to the root node of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

size_t left_height = binary_tree_height(tree->left);
size_t right_height = binary_tree_height(tree->right);

if (left_height == right_height)
{
if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
return (1);
}

return (0);
}

