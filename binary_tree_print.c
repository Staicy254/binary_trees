#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

#define INITIAL_BUFFER_SIZE 255

/**
* print_t - recursively prints each level of the tree
*/
static void print_t(const binary_tree_t *tree, int offset, int depth, char **s)
{
char b[10];
int width, left, right, i;

if (!tree)
return;

width = sprintf(b, "(%03d)", tree->n);
left = tree->left ? 1 : 0;
right = tree->right ? 1 : 0;

print_t(tree->left, offset - width / 2 - left, depth + 1, s);
print_t(tree->right, offset + width / 2 + right, depth + 1, s);

for (i = 0; i < width; i++)
s[depth][offset + i] = b[i];
}

/**
* binary_tree_height - Calculates the height of the binary tree
*/
static size_t binary_tree_height(const binary_tree_t *tree)
{
if (!tree)
return 0;

size_t left_height = binary_tree_height(tree->left);
size_t right_height = binary_tree_height(tree->right);

return (left_height > right_height ? left_height : right_height) + 1;
}

/**
* binary_tree_print - Prints a binary tree
*/
void binary_tree_print(const binary_tree_t *tree)
{
if (!tree)
return;

size_t height = binary_tree_height(tree);
char **s = malloc(sizeof(*s) * height);
if (!s)
{
fprintf(stderr, "Memory allocation failed\n");
return;
}

for (size_t i = 0; i < height; i++)
{
s[i] = malloc(INITIAL_BUFFER_SIZE * sizeof(**s));
if (!s[i])
{
fprintf(stderr, "Memory allocation failed\n");
/**
* Clean up previously allocated memory
*/
for (size_t j = 0; j < i; j++)
free(s[j]);
free(s);
return;
}
memset(s[i], ' ', INITIAL_BUFFER_SIZE);
s[i][INITIAL_BUFFER_SIZE - 1] = '\0';
}

print_t(tree, INITIAL_BUFFER_SIZE / 2, 0, s);

for (size_t i = 0; i < height; i++)
{
printf("%s\n", s[i]);
free(s[i]);
}
free(s);
}

