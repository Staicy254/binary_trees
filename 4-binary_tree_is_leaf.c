#include "binary_trees.h"

/**
* binary_tree_is_leaf - Check if node is leaf
* @node: Pointer node to check
*
* Return: 1 node is leaf, if not 0 
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);

return (node->left == NULL && node->right == NULL);
}

