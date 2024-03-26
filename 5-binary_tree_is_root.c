#include "binary_trees.h"

/**
 * binary_tree_is_root - Checksif a node is a root
 * @node: Pointer to node to be checked
 *
 * Return: 1 if the node is a root, 0 false
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
return (0);
return (1);
}

