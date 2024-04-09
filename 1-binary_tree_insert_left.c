#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_insert_left - check code
*
* @parent: pointer
* @value: int
* Return: new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
