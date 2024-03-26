#include "binary_trees.h"

/**
 * binary_tree_height_b - Measure the height of a binary tree
 * @tree: Pointer - root node of the tree
 *
 * Return: Height of binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

size_t left_height = binary_tree_height_b(tree->left);
size_t right_height = binary_tree_height_b(tree->right);

return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Measure the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor of the binary tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

int left_height = (int)binary_tree_height_b(tree->left);
int right_height = (int)binary_tree_height_b(tree->right);

return (left_height - right_height);
}

