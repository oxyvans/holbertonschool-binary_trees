#include "binary_trees.h"

/**
 * binary_tree_height - main.
 * @tree: tree
 * Return: size
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	if (h_left <= h_right)
		return (h_right + 1);
	else
		return (h_left + 1);


}
