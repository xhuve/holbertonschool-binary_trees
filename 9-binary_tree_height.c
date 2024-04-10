#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_height - check code
*
* @tree: pointer
* Return: new node
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL)
		return (0);

	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
