#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_uncle - check code
*
* @node: pointer
* Return: new node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *gparent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	gparent = parent->parent;
	if (gparent == NULL)
		return (NULL);

	if (gparent->left == parent)
		return (gparent->right);
	else if (gparent->right == parent)
		return (gparent->left);
	else
		return (NULL);
}
