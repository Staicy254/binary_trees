#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @parent: Node parent
 * @value: Value of node
 * Return: New node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
if (parent == NULL)
{
/*
Optionally handle error or log message for NULL parent
*/
}

/* 
Allocate memory for new node
*/
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
{
/*
Optionally handle error or log message for memory allocation failure
*/
return NULL;
}

/*
Initialize node values
*/
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;

return new_node;
}
