#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_node - check code
*
* @parent: pointer
* @value: int
* Return: new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	if (parent == NULL)
	{
		new->parent = NULL;
		parent = new;
		return new;
	}
	new->parent = parent;

	return (new);
}
