#include "binary_trees.h"

/**
 * binary_tree_insert_right - main.
 * @parent: nodo.
 * @value: int
 * Return: nodo
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo, *aux;

	if (parent == NULL)
		return (NULL);

	nodo = malloc(sizeof(binary_tree_t));
	if (nodo == NULL)
		return (NULL);

	nodo->n = value;
	nodo->left = nodo->right = NULL;
	nodo->parent = parent;

	aux = parent->right;

	if (parent->right == NULL)
	{
		parent->right = nodo;
	}
	else
	{
		parent->right = nodo;
		aux->parent = nodo;
		nodo->right = aux;
	}
	return (nodo);
}
