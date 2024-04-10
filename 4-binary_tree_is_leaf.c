#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_is_leaf - check code
*
* @node: pointer
* Return: new node
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);

	return (0);
}
