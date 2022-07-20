#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - main.
 * @tree: tree
 * Return: nodo
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)binary_tree_height(tree->left) - (int)binary_tree_height(tree->right));
}
