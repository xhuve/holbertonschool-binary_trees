#include <stdlib.h>
#include "binary_trees.h"

/**
* find_height - check code
*
* @tree: pointer
* Return: new node
*/
int find_height(const binary_tree_t *tree)
{
        int left = 0, right = 0;

        if (tree == NULL)
                return (0);

        if (tree->left == NULL && tree->right == NULL)
                return (1);

        left = find_height(tree->left);
        right = find_height(tree->right);

        if (left > right)
                return (left + 1);
        else
                return (right + 1);
}

/**
* binary_tree_balance - check code
*
* @tree: pointer
* Return: new node
*/
int binary_tree_balance(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);

        return (find_height(tree->left) - find_height(tree->right));
}

/**
* binary_tree_is_perfect - check code
*
* @tree: pointer
* Return: new node
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree) == 0 && find_height(tree->right) == find_height(tree->left))
		return (1);

	return 0;
}
