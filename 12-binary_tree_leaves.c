#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_leaves - main.
 * @tree: tree
 * Return: nodo
 **/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
