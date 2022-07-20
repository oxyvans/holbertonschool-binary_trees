#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_nodes - main.
 * @tree: tree
 * Return: size
 **/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
