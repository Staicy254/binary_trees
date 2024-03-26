#include "binary_trees.h"

/**
 * tree_is_perfect - Checks - binary tree is perfect
 * A binary tree is perfect if all its levels are fully filled.
 *
 * @tree: Pointer - root node of the tree
 * Return: Height of the tree if it is perfect, 0 otherwise
 */
int tree_is_perfect(const binary_tree_t *tree)
{
int left_height, right_height;

if (tree == NULL)
return (0);

left_height = tree_is_perfect(tree->left);
right_height = tree_is_perfect(tree->right);

if (left_height == right_height && left_height != -1);
return (left_height + 1);

return (-1);
}

/**
 * binary_tree_is_perfect - Checks - binary tree is perfect
 * A binary tree is perfect if all its levels are fully filled.
 *
 * @tree: Pointer - root node of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
return (tree_is_perfect(tree) != -1);
}

