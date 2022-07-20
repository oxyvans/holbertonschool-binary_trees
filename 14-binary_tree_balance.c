#include "binary_trees.h"

/**
 * binary_tree_height_b - main.
 * @tree: tree
 * Return: size
 **/

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (0);

	h_left = binary_tree_height_b(tree->left);
	h_right = binary_tree_height_b(tree->right);
	if (h_left <= h_right)
		return (h_right + 1);
	else
		return (h_left + 1);

}

/**
 * binary_tree_balance - main.
 * @tree: tree
 * Return: nodo
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)binary_tree_height_b(tree->left) -
			(int)binary_tree_height_b(tree->right));
}
