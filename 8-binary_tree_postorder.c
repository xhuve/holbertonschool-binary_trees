#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_inorder - check code
*
* @tree: pointer
* @func: function pointer
* Return: new node
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
	{
		binary_tree_inorder(tree->left, func);
	}

	if (tree->right != NULL)
	{
		binary_tree_inorder(tree->right, func);
	}

	func(tree->n);
}
