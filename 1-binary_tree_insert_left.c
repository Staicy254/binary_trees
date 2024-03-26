#include "binary_trees.h"

/**
 * binary_tree_insert_left - Add node as left-child of another node
 * @parent: Pointer to Parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
return (NULL);

/**
* Generate new node with the specified value
*/
new_node = binary_tree_node(parent, value);
if (new_node == NULL)
return (NULL);

/**
*If the parent already has a left child, move it down one level
*/
if (parent->left != NULL)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}

/**
*Places the new node as the left child of the parent
*/
parent->left = new_node;

return (new_node);
}

