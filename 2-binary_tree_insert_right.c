#include "binary_trees.h"

/**
 * binary_tree_insert_right - Add a node as the right-child of another node
 * @parent: Pointer to parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
return (NULL);

/**
* Allocate a new node with the specified value
*/
new_node = binary_tree_node(parent, value);
if (new_node == NULL)
return (NULL);

/**
* Set's the new node's right
* If the parent already has a right child, move it down one level
*/
if (parent->right != NULL)
{
new_node->right = parent->right;
parent->right->parent = new_node;
}

/**
*Set the new node as the right child of the parent
*/
parent->right = new_node;

return (new_node);
}

