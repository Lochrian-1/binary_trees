#include "binary_trees.h"

/**
* binary_tree_insert_left - creates a binary tree node
* @parent: parent node
* @value: value for new node
*
* Return: new node, or NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo = NULL;

	if (parent == NULL)
		return (NULL);

	nodo = binary_tree_node(parent, value);
	if (nodo == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = nodo;
	}
	else
	{
		nodo->left = parent->left;
		parent->left = nodo;
		nodo->left->parent = nodo;
	}

	return (nodo);
}
