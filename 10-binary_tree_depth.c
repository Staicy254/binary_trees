#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree
 * @tree: Pointer to node to measure the depth of
 *
 * Return: Depth the node from the root, or 0 if  NULL or is the root
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL || tree->parent == NULL)
return (0);

return (1 + binary_tree_depth(tree->parent));
}

