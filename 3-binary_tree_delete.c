#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_delete - check code
*
* @tree: pointer
* Return: new node
*/
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
		return;

	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
		return;
	}

	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
		return;
	}

	free(tree); 

}
