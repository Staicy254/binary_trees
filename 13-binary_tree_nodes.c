#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the number of nodes in a binary tree with children
 * @tree: Pointer - root node of the tree
 *
 * Return: Number of nodes with children in binary tree, or 0 if is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

size_t nodes = 0;

if (tree->left != NULL || tree->right != NULL)
nodes++;

nodes += binary_tree_nodes(tree->left);
nodes += binary_tree_nodes(tree->right);

return (nodes);
}

