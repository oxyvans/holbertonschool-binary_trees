#include "binary_trees.h"

/**
 * binary_tree_insert_left - main.
 * @parent: nodo.
 * @value: int
 * 
 * Return: nodo
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	aux = parent->left;

	if (parent->left == NULL)
	{
		parent->left = nodo;
	}
	else
	{
		parent->left = nodo;
		aux->parent = nodo;
		nodo->left = aux;
	}
	return (nodo);
}
