#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds sibling - given node - binary tree
 * @node: Pointer - node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if no sibling exists
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);

if (node->parent->left == node)
return (node->parent->right);
else
return (node->parent->left);
}

