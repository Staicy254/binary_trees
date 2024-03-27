#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds lowest common ancestor of two nodes
 * @first: Pointer first node
 * @second: Pointer second node
 * Return: Pointer lowest common ancestor node,
 *         or NULL if no common ancestor found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
if (first == NULL || second == NULL)
return (NULL);

if (first == second)
return ((binary_tree_t *)first);

if (first == second->parent || second == first->parent)
return ((binary_tree_t *)second->parent);

if (!first->parent && second->parent)
return (binary_trees_ancestor(first, second->parent));

if (!second->parent && first->parent)
return (binary_trees_ancestor(first->parent, second));

return (binary_trees_ancestor(first->parent, second->parent));
}

