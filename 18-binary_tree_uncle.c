#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle - given node - binary tree
 * @node: Pointer - node to find the uncle
 *
 * Return: Pointer - uncle node, or NULL - uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);

binary_tree_t *grandparent = node->parent->parent;

if (grandparent->left == node->parent)
return (grandparent->right);
else
return (grandparent->left);
}

