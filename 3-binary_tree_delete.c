#include "binary_trees.h"

/**
 * binary_tree_delete - Frees the entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;

/**
*Repeatedly deletes left and right subtrees
*/
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

/**
*Reset parent's pointers to NULL
*/
if (tree->parent != NULL)
{
if (tree->parent->left == tree)
tree->parent->left = NULL;
else
tree->parent->right = NULL;
}

/**
*Free the current node
*/
free(tree);
}

