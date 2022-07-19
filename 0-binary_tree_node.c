#include "binary_trees.h"

/**
 * binary_tree_node - main.
 * @parent: nodo.
 * @value: int
 * Return: nodo
 **/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	nodo = malloc(sizeof(binary_tree_t));
	if (nodo == NULL)
		return (NULL);

	nodo->n = value;
	nodo->left = nodo->right = NULL;

	if (parent == NULL)
	{
		nodo->parent = NULL;
		return (nodo);
	}
	else
	{
		nodo->parent = parent;
		return (nodo);
	}
}
