#include "binary_trees.h"

/**
 * depth - main.
 * @tree: tree
 * Return: int
 **/
int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * aux - main.
 * @tree: tree
 * @d: int
 * @level : int
 * Return: nodo
 **/

int aux(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (aux(tree->left, d, level + 1) && aux(tree->right, d, level + 1));
}
/**
 * binary_tree_is_perfect - main.
 * @tree: tree
 * Return: nodo
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = depth(tree);

	if (tree == NULL)
		return (0);
	return (aux(tree, d, 0));
}
